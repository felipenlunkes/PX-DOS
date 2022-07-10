/*********************************************************************/
/*                                                                   */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/*   #$$%%@!#$%                                                      */
/*   !!@#!$!$!$         Sistema Operacional PX-DOS �                 */
/*   !@@#   #$%                                                      */
/*   #$$%   &*$                                                      */
/*   $#%@   @#&                                                      */
/*   #%$&*(@*@&                                                      */
/*   @#$@$#@$%$     � 2013-2016 Felipe Miguel Nery Lunkes            */
/*   $%&*                Todos os direitos reservados                */
/*   @#&*                                                            */
/*   @&*%                                                            */
/*   #&*@                                                            */
/*                                                                   */
/*                                                                   */
/* O PX-DOS � � marca registrada de Felipe Miguel Nery Lunkes no     */
/* Brasil. � 2013-2016 Felipe Miguel Nery Lunkes. Todos os direitos  */
/* reservados. A reprodu��o total ou parcial, de quaisquer trechos   */
/* do c�digo aqui presente � expressamente probida, sendo pass�vel   */
/* de puni��o legal severa.                                          */
/*                                                                   */
/* Copyright � 2013-2016 Felipe Miguel Nery Lunkes                   */
/* Todos os direitos reservados.                                     */
/*                                                                   */
/*********************************************************************/ 
// Implementa��o stdio

#include <stdio.h>

#include "fat.h"
#include "bios.h"
#include "bnpxdos.h"
#include "naousado.h"

static ARQUIVOFAT arquivofat;
extern FAT gfat;

ARQUIVO *abrirarquivo(const char *nome, const char *modo)
{

    naousado(modo);
	
    abrirarquivofat(&gfat, nome, &arquivofat);
	
    return ((ARQUIVO *)1);
	
}

/*****************************************************************************************/

int fechar(ARQUIVO *ArquivoEmDisco)
{

    naousado(ArquivoEmDisco);
	
    return (0);
	
}

/*****************************************************************************************/

tamanho_t lerarquivo(void *buf, tamanho_t tamanho, tamanho_t buffat, ARQUIVO *ArquivoEmDisco)
{
    tamanho_t retorno;
    
    naousado(tamanho);
    naousado(ArquivoEmDisco);
    ret = lerarquivofat(&gfat, &arquivofat, buf, buffat);
	
    return (retorno);
	
}
