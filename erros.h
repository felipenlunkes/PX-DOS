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

/*

�rea de fun��es para gerenciamento de erros do Kernel do PX-DOS


*/

void telaazul(void){ // Fun��o para limpar a tela e mudar sua cor para azul

asm {


	mov ah,05h
	mov al,0
	int 10h
	mov dx,0
	mov bh,0
	mov ah,2h
	int 10h
	mov cx,2000
	mov bh,0
	mov bl,17h
	mov al,20h
	mov ah,9h
	int 10h

}

}