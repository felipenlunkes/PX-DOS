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

#include <stddef.h>
#include <string.h>

int patmat(char *cru,char *pronto)
{  int  i ;

   if ((*pronto == '\0') && (*cru == '\0'))   
     return( 1 ) ;  
	 
   if (*pronto == '\0')                       
     return( 0 ) ;    
	 
   if (*pronto == '*')                         
    { 
	
	if (*(pronto+1) == '\0')                
         return( 1 ) ;  
		 
      for(i=0;i<=tamanhostring(cru);i++)           
        if ((*(cru+i) == *(pronto+1)) ||       
            (*(pronto+1) == '?'))
         if (patmat(cru+i+1,pronto+2) == 1)   
              return( 1 ) ;                 
    }
	
   else
    { 
	if (*cru == '\0')                     
         return( 0 ) ;   
		 
      if ((*pronto == '?') || (*pronto == *cru))  
        if (patmat(cru+1,pronto+1) == 1)      
           return( 1 ) ;
		   
    }
	
   return( 0 ) ;  
   
}
