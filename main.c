/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seddaoud <seddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:20:06 by seddaoud          #+#    #+#             */
/*   Updated: 2017/02/06 18:29:28 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includes/ft_printf.h"
#include <locale.h>
#include <stdio.h>
#define CHAR_MAX 127
#define CHAR_MAX_ 255
#define CHAR_MIN (-128)
#define CHAR_MIN_ 0
#define LONG_MAX (+9223372036854775807)
//0x7FFFFFFFL
int main(void)
{
	//# 0044
    // // int i=0;
    // ft_printf("moni printf:");
    ft_printf("\n");
	ft_printf("");
	ft_printf("This is a simple test.");
	ft_printf("");
	ft_printf("len:%d\n", g_sarg.val_ret);
	// printf("length:%d\n", g_sarg.val_ret);
	//ft_printf("\n");
	//ft_printf("len:%d\n", g_sarg.val_ret);
	//ft_printf("valret:%d\n", g_sarg.val_ret);
	//printf("len:%d\n", printf("\n"));
    // ft_printf("vrai printf:");
    //printf("%   %", "test");
	//ft_printf("\n");
    // printf("vprintf0:%50s\n","42");
    // ft_printf("fprintf:%50s\n","42");
    // printf("vprintf1:%-5.5s\n","42");
    // ft_printf("fprintf1:%-5.5s\n","42");
    //printf("vprintf2:%05.5s\n","42");
    //
    // printf("vprintf0:%50d\n",42);
    // ft_printf("fprintf:%50d\n",42);
    // printf("vprintf1:%-5.5d\n",42);
    // ft_printf("fprintf1:%-5.5d\n",42);
    // printf("vprintf2:%+5.5d\n",42);
    // ft_printf("fprintf2:%+5.5d\n",42);
    // printf("vprintf3:%-5d\n",42);
    // ft_printf("fprintf3:%-5d\n",42);
    // printf("vprintf4:%+5d\n",42);
    // ft_printf("fprintf4:%+5d\n",42);
    // printf("vprintf5:%-.5d\n",42);
    // ft_printf("fprintf5:%-.5d\n",42);
    // printf("vprintf6:%+.5d\n",42);
    // ft_printf("vprintf6:%+.5d\n",42);
    // ft_printf("fprintf:%-10d\n",42);
    // printf("vprintf1:%-10d\n",42);
    // ft_printf("fprintf:%-5.10d\n",42);
    // printf("vprintf:%-5.10d\n",42);
    /*	printf("'%5d'\n", 10);
     printf("'%-5d'\n", 10);
     printf("'%05d'\n", 10);
     printf("'%+5d'\n", 10);
     printf("'%-+5d'\n", 10);

     printf("'=============='\n");

     ft_printf("'%5d'\n", 10);
     ft_printf("'%-5d'\n", 10);
     ft_printf("'%05d'\n", 10);
     ft_printf("'%+5d'\n", 10);
     ft_printf("'%-+5d'\n", 10);
     */	/*
         printf("0+7'%0+7d'\n", 42);
         ft_printf("0+7'%0+7d'", 42);
         ft_printf("\n===========\n");

         printf("0+-7 '%0+-7d'\n", 42);
         ft_printf("0+-7 '%0+-7d'", 42);

         ft_printf("\n===========\n");

         printf("0+7'%0+7d'\n", -42);
         ft_printf("0+7'%0+7d'", -42);
         ft_printf("\n===========\n");

         printf("0+-7 '%0+-7d'\n", -42);
         ft_printf("0+-7 '%0+-7d'\n", -42);

         ft_printf("\n===========\n");

         printf("'%10.5d'\n", 4242);     //     -> "     04242"
         printf("'%-10.5d'\n", 4242);    //     -> "04242     "
         printf("'% 10.5d'\n", 4242);    //     -> "     04242"
         printf("'%+10.5d'\n", 4242);    //     -> "    +04242"
         printf("'%-+10.5d'\n", 4242);   //     -> "+04242    "
         printf("'%03.2d'\n", 0);        //     -> " 00"
         printf("'%03.2d'\n", 1);        //     -> " 01"

         ft_printf("\n===========\n");

         ft_printf("'%10.5d'\n", 4242);     //     -> "     04242"
         ft_printf("'%-10.5d'\n", 4242);    //     -> "04242     "
         ft_printf("'% 10.5d'\n", 4242);    //     -> "     04242"
         ft_printf("'%+10.5d'\n", 4242);    //     -> "    +04242"
         ft_printf("'%-+10.5d'\n", 4242);   //     -> "+04242    "
         ft_printf("'%03.2d'\n", 0);        //     -> " 00"
         ft_printf("'%03.2d'\n", 1);        //     -> " 01"

         ft_printf("\n===========\n");

         printf("'%-5d'\n", -42);        //     -> " 01"
         ft_printf("'%-5d'\n", -42);        //     -> " 01"
         printf("'@moulitest: >%5.d< >%5.0d<'\n", 0,0);        //     -> " 01"
         ft_printf("'@moulitest: >%5.d< >%5.0d<'\n", 0,0);        //     -> " 01"
         printf("%hd\n", 32768);
         ft_printf("%hd\n", 32768);

         ft_printf("%hhd\n", 127);                       //-> "127"
         ft_printf("%hhd\n", 128);                       //-> "-128"
         ft_printf("%hhd\n", -128);                      //-> "-128"
         ft_printf("%hhd\n", -129);                      //-> "127"
         printf("'%-5c'\n", 42);
         printf("'%0-5c'\n", 42);
         printf("'% -5c'\n", 42);
         printf("'%05c'\n", 42);
         printf("'% 5c'\n", 42);
         ft_printf("'%-5c'\n", 42);
         ft_printf("'%0-5c'\n", 42);
         ft_printf("'% -5c'\n", 42);
         ft_printf("'%05c'\n", 42);
         ft_printf("'% 5c'\n", 42);

         //printf("'%lc'\n", 'é');
         //ft_printf("'%lc'\n", 42);
         ft_printf("%055s  ", "this is a string\n");
         */
    //printf("'%hZ%'\n");//Z
    //ft_printf("'% hZ%'");//Z
    //ft_printf("%hhld", "128");
    /*printf("'%05c'\n", 42);
     ft_printf("'%05c'\n", 42);
     ft_printf("%zhd", "4294967296");

     printf("\n");
     printf("%5 d", 42);
     printf("\n");
     printf("%5+d", -42);
     printf("\n");
     ft_printf("%5 d", 42);
     printf("\n");
     ft_printf("%5+d", -42);
     printf("\n");
     printf("@main_ftprintf: %####0000 33..1..#00d\n", 256); //-> "@main_ftprintf:                               256\n"
     printf("@main_ftprintf: %####0000 33..1d\n", 256);// -> "@main_ftprintf:                               256"
     printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);// -> "@main_ftprintf: +256                             "
     printf("\n");
     ft_printf("@main_ftprintf: %####0000 33..1..#00d\n", 256); //-> "@main_ftprintf:                               256\n"
     ft_printf("@main_ftprintf: %####0000 33..1d\n", 256);// -> "@main_ftprintf:                               256"
     ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);// -> "@main_ftprintf: +256                             "
     */
    //printf("'%lhl", "9223372036854775807");
    //ft_printf("'%lhl", "9223372036854775807");
    //printf("%jhd", "9223372036854775807");
    //ft_printf("%05%");
    //printf("'%5%'");
    //printf("\n");
    //ft_printf("'%5%'");
    //printf("\n");
    //printf("%%   %", "test");
    //printf("\n");
   	//ft_printf("%%   %", "test");

    /*printf("%zhd", "4294967296");
     printf("\n");
     printf("%zhd", "4294967296");
     printf("\n");
     ft_printf("%zhd", "4294967296");
     printf("\n");
     ft_printf("%zhd", "4294967296");*/


    /*
     const char* s = "Hello";
     printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n",
     s, s, 10, s, 4, s, 10, 4, s);
     printf("Characters:\t%c %%\n", 65);
     printf("Integers\n");
     printf("Decimal:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
     printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
     printf("Octal:\t%o %#o %#o\n", 10, 10, 4);

     ft_printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n",
     s, s, 10, s, 4, s, 10, 4, s);
     ft_printf("Characters:\t%c %%\n", 65);
     ft_printf("Integers\n");
     ft_printf("Decimal:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
     ft_printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
     ft_printf("Octal:\t%o %#o %#o\n", 10, 10, 4);
     */
    /*

     L ft_printf("%X", 4294967296);                  -> "0"printf("'%-5o'", 2500);                    //  -> "4704 "
     printf("\n");
     printf("'%#6o'", 2500);                   //  -> " 04704"
     printf("\n");
     printf("'%-#6o'", 2500);                    // -> "04704 "
     printf("\n");
     printf("'%-05o'", 2500);                    // -> "4704 "
     printf("\n");
     printf("'%-5.10o'", 2500);                  // -> "0000004704"
     printf("\n");
     printf("'%-10.5o'", 2500);                   ///-> "04704     "
     printf("\n");
     printf("@moulitest: '%o'", 0);              // -> "@moulitest: 0"
     printf("\n");
     printf("@moulitest: '%.o' '%.0o'", 0, 0);     // -> "@moulitest:  "
     printf("\n");
     printf("@moulitest: '%5.o' '%5.0o'", 0, 0);   // -> "@moulitest:            "
     printf("\n");
     printf("@moulitest: '%#.o' '%#.0o'", 0, 0);   // -> "@moulitest: 0 0"
     printf("\n");
     printf("@moulitest: '%.10o'", 42);         //  -> "@moulitest: 0000000052"
     printf("\n");

     ft_printf("'%-5o'", 2500);                    //  -> "4704 "
     printf("\n");
     ft_printf("'%#6o'", 2500);                   //  -> " 04704"
     printf("\n");
     ft_printf("'%-#6o'", 2500);                    // -> "04704 "
     printf("\n");
     ft_printf("'%-05o'", 2500);                    // -> "4704 "
     printf("\n");
     ft_printf("'%-5.10o'", 2500);                  // -> "0000004704"
     printf("\n");
     ft_printf("'%-10.5o'", 2500);                   ///-> "04704     "
     printf("\n");
     ft_printf("@moulitest: '%o'", 0);              // -> "@moulitest: 0"
     printf("\n");
     ft_printf("@moulitest: '%.o' '%.0o'", 0, 0);     // -> "@moulitest:  "
     printf("\n");
     ft_printf("@moulitest: '%5.o' '%5.0o'", 0, 0);   // -> "@moulitest:            "
     printf("\n");
     ft_printf("@moulitest: '%#.o' '%#.0o'", 0, 0);   // -> "@moulitest: 0 0"
     printf("\n");
     ft_printf("@moulitest: '%.10o'", 42);         //  -> "@moulitest: 0000000052"
     printf("\n");

     printf("'%-7.02o'", 2500);       //            -> "0000004704"
     printf("\n");
     printf("'%+2o'", 0);        //           -> "04704     "
     printf("\n");
     ft_printf("'%-7.02o'", 2500);       //            -> "0000004704"
     printf("\n");
     ft_printf("'%+2o'", 0);        //           -> "04704     "
     printf("\n");

     printf("============");
     printf("\n");
     printf("'%+2.7o'", 2500);       //            -> "0000004704"
     printf("\n");
     ft_printf("'%+2.7o'", 2500);        //           -> "04704     "
     printf("\n");
     printf("%o, %ho, %hho\n", -42, -42, -42);
     ft_printf("%o, %ho, %hho", -42, -42, -42);

     printf("\n");
     printf("'%+-09.7d'", 2500);       //            -> "0000004704"
     printf("\n");
     ft_printf("'%+-09.7d'", 2500);        //           -> "04704     "
     */
    /*printf("============");
     printf("||          ||\n");
     printf("============");
     printf("\n");
     printf("\n");
     printf("'%0 -o'", 0);
     printf("\n");
     printf("'%-o'", 0);
     printf("\n");
     printf("'%0 2o'", 0);
     printf("\n");
     printf("'%0 -4.8o'", 0);
     printf("\n");
     printf("'%0 -0.3o'", 0);
     printf("\n");
     printf("'%#0 -.0o'", 0);
     printf("\n");
     printf("'%#00o'", 0);
     printf("\n");
     printf("'%#0 -1.1o'", 0);
     printf("\n");
     printf("'%#0.0o'", 0);
     printf("\n");
     printf("'%#0o'", 0);
     printf("\n");
     printf("'%#-+04.0o'", 0);
     printf("\n");
     printf("'%#-+014.16o'", 0);
     printf("\n");


     printf("============");
     printf("||          ||\n");
     printf("============");
     printf("\n");
     printf("\n");
     ft_printf("'%0 -o'", 0);
     printf("\n");
     ft_printf("'%-o'", 0);
     printf("\n");
     ft_printf("'%0 2o'", 0);
     printf("\n");
     ft_printf("'%0 -4.8o'", 0);
     printf("\n");
     ft_printf("'%0 -0.3o'", 0);
     printf("\n");
     ft_printf("'%#0 -.0o'", 0);
     printf("\n");
     ft_printf("'%#00o'", 0);
     printf("\n");
     ft_printf("'%#0 -1.1o'", 0);
     printf("\n");
     ft_printf("'%#0.0o'", 0);
     printf("\n");
     ft_printf("'%#0o'", 0);
     ft_printf("\n");
     ft_printf("'%#+-04.0o'", 0);
     ft_printf("\n");
     ft_printf("'%#+-014.16o'", 0);
     ft_printf("\n");
     */
    /*
     printf("'%X'\n", -42);
     ft_printf("'%X'\n", -42);
     printf("'%x'\n", -42);
     printf("'%x'\n", -42);
     ft_printf("\n");
     ft_printf("\n");
     ft_printf("\n");
     printf("'%x'", 0);   //                        -> "0"
     ft_printf("\n");
     printf("'%X'", 0);     //                      -> "0"
     ft_printf("\n");

     ft_printf("\n");
     ft_printf("'%x'", 0);   //                        -> "0"
     ft_printf("\n");
     ft_printf("'%X'", 0);     //                      -> "0"
     ft_printf("\n");

     printf("\n");
     ft_printf("%x", 0);   //                        -> "0"
     printf("\n");
     ft_printf("%X", 0);     //                      -> "0"
     printf("\n");
     */
    /*	printf("'%X'", 4294967296);        //          -> "0"
     printf("\n");
     printf("'%X'", 4294967296);   //               -> "0"
     printf("\n");
     ft_printf("'%x'", 4294967296);        //          -> "0"
     printf("\n");
     ft_printf("'%x'", 4294967296);   //               -> "0"
     printf("\n");

     printf("@moulitest: '%5.x' '%5.0x'", 0, 0);
     printf("\n");
     ft_printf("@moulitest: '%5.x' '%5.0x'", 0, 0);
     printf("\n");

     printf("'%.5p'", 0);
     printf("\n");
     ft_printf("'%.5p'", 0);
     printf("\n");
     int i = 42;
     printf("'%p'", &i);
     printf("\n");
     ft_printf("'%p'", &i);

     printf("\n");
     printf("%2.9p", 1234);
     printf("\n");
     ft_printf("%2.9p", 1234);
     printf("\n");
     */
    //	setlocale (LC_ALL, "");
    //wchar_t f = '1060';
    //wchar_t c = '\u0444';
    //ft_printf("'%C'",0x11101011);

    /*	i=printf("'%C'", 'c');
     printf("'%d'", i);
     printf("\n");
     i=ft_printf("'%C'",'c');
     printf("\n'%-16.8S'", L"Á±≥");
     ft_printf("\n'%-16.8S'", L"Á±≥");
     printf("\n'%+-5.8S'", 0);
     ft_printf("\n'%+-5.8S'", 0);

     printf("\n{%+-s}", 0);
     ft_printf("\n{%+-s}", 0);

     printf("\n");

     printf("'%.4x'", 42);
     printf("\n");
     printf("<-->");
     printf("\n");
     ft_printf("'%.4x'", 42);

    //  printf("\n");
    //  printf("%hhd", CHAR_MAX + 42);
    //  printf("\n");
    //  ft_printf("%hhd", CHAR_MAX + 42);
    //  printf("\n");
    //  printf("%hhd", 0);
    //  printf("\n");
    //  ft_printf("%hhd", 0);
    //  i = printf("'%hhd'", CHAR_MAX + 42);
    //  printf(" '%d'\n", i);
    //  i = ft_printf("'%hhd'", CHAR_MAX + 42);
    //  printf(" '%d'\n\n\n", i);
    //  printf("'%hhd''%hhd'\n", 1, 42);
    //  ft_printf("'%hhd''%hhd'\n", 1, 42);
    //
    //  printf("%hhd\n", CHAR_MIN);
    //  ft_printf("%hhd\n", CHAR_MIN);
    //  printf("'%hhi''%hhi'\n", 0, 42);
    //  ft_printf("'%hhi''%hhi'\n", 0, 42);
    //  //	printf("%hhi%hhi\n", 0,CHAR_MAX + 42);
    //  //	ft_printf("%hhi%hhi\n", 0, CHAR_MAX + 42);
    //  i=printf("'%o'\n", LONG_MAX);
    //  printf(" '%d'\n", i);
    //  i=ft_printf("'%o'\n", LONG_MAX);
    //  printf(" '%d'\n", i);
    //  */
    // //	i=printf("'%5.*d'\n", 1,5);
    // //	printf(" '%d'\n", i);
    // //	i=ft_printf("'%5.*d'\n", 1,5);
    // //	printf(" '%d'\n", i);
    // printf("{%3*d}\n", 12, 42);
    // ft_printf("{%3*d}\n", 12, 42);
    //
    // printf("{%*3d}\n", 5, 0);
    // ft_printf("{%*3d}\n", 5, 0);
    //
    // printf("'{%*.4u}'\n", -4, 42);
    // ft_printf("'{%*.4u}'\n", -4, 42);
    //
    // printf("'{%9.*d}'\n", -8, 42);
    // ft_printf("'{%9.*d}'\n", -5, 42);
    // printf("{%9.*s}\n", -5, 42);
    // ft_printf("{%9.*s}\n", -5, 42);
    //
    // printf("%.4s\n", "42 is the answer");
    // ft_printf("%.4s\n", "42 is the answer");
    // printf("'%15.4s'\n", 42);
    // ft_printf("'%15.4s'\n", 42);
    // printf("'%15.4s'\n", "I am 42");
    // ft_printf("'%15.4s'\n", "I am 42");
    //
    // printf("\n'--------------------'");
    // printf("\n'% 5.d'",0);
    // printf("\n'% .5d'",0);
    // printf("\n'% 0.5d",0);
    // printf("\n'% 5.0d",0);
    // printf("\n'% 0.0d",0);
    // printf("\n'% 1.5d",0);
    // printf("\n'% 5.1d",0);
    //
    // printf("\n{        <=>        }\n");
    //
    // ft_printf("\n'% 5.d'",0);
    // ft_printf("\n'% .5d'",0);
    // ft_printf("\n'% 0.5d",0);
    // ft_printf("\n'% 5.0d",0);
    // ft_printf("\n'% 0.0d",0);
    // ft_printf("\n'% 1.5d",0);
    // ft_printf("\n'% 5.1d",0);
    //
    // printf("\n'--------------------'");
    //
    // printf("\n'% 5.d",424242);
    // printf("\n'% .5d",424242);
    // printf("\n'% 0.5d'",424242);
    // printf("\n'% 5.0d'",424242);
    // printf("\n'% 0.0d'",424242);
    // printf("\n'% 1.5d'",424242);
    // printf("\n'% 5.1d'",424242);
    //
    // printf("\n{        <=>        }\n");
    //
    // ft_printf("\n'% 5.d",424242);
    // ft_printf("\n'% .5d",424242);
    // ft_printf("\n'% 0.5d'",424242);
    // ft_printf("\n'% 5.0d'",424242);
    // ft_printf("\n'% 0.0d'",424242);
    // ft_printf("\n'% 1.5d'",424242);
    // ft_printf("\n'% 5.1d'",424242);
    // printf("\n'--------------------'");
    //
    // printf("\n'% 5.d'",42);
    // printf("\n'% .5d'",42);
    // printf("\n'% 0.5d'",42);
    // printf("\n'% 5.0d'",42);
    // printf("\n'% 0.0d'",42);
    // printf("\n'% 1.5d'",42);
    // printf("\n'% 5.1d'",42);
    //
    // printf("\n{        <=>        }\n");
    //
    // ft_printf("\n'% 5.d'",42);
    // ft_printf("\n'% .5d'",42);
    // ft_printf("\n'% 0.5d'",42);
    // ft_printf("\n'% 5.0d'",42);
    // ft_printf("\n'% 0.0d'",42);
    // ft_printf("\n'% 1.5d'",42);
    // ft_printf("\n'% 5.1d'",42);
    //
    // printf("\n'--------------------'");
    //
    // printf("\n'% 5.d'",4242);
    // printf("\n'% .5d'",4242);
    // printf("\n'% 0.5d'",4242);
    // printf("\n'% 5.*d'",0,4242);
    // printf("\n'% 0.0d'",4242);
    // printf("\n'% 1.5d'",4242);
    // printf("\n'% 5.1d'",4242);
    //
    // printf("\n{        <=>        }\n");
    //
    // ft_printf("\n'% 5.d'",4242);
    // ft_printf("\n'% .5d'",4242);
    // ft_printf("\n'% 0.5d'",4242);
    // ft_printf("\n'% 5.0d'",4242);
    // ft_printf("\n'% 0.0d'",4242);
    // ft_printf("\n'% 1.5d'",4242);
    // ft_printf("\n'% 5.1d'",4242);
    // printf("\n'--------------------'");
    // printf("\n");
    //
    // printf("'%5.*d'\n", 1,5);
    // //printf(" '%d'\n", i);
    // ft_printf("'%5.*d'\n", 1,5);
    //
    // printf(" '%d'\n", i);
	// i=printf("'%.0%'");
    // printf(" '%d'\n", i);
    // printf("\n");
	// i=ft_printf("'%.0%'");
    // printf(" '%d'\n", i);
    // printf("\n");
	// printf("%4.15s", 42);
    // printf("\n");
	// ft_printf("%4.15s", 42);
    // printf("\n");
	// printf("{%05.%}", 0);
    // printf("\n");
	// ft_printf("{%05.%}", 0);
    // printf("\n");
	// printf("{%05.s}", 0);
    // printf("\n");
	// ft_printf("{%05.s}", 0);
    // printf("\n");
	// printf("{%5.*s}", -5, 42);
    // printf("\n");
	// ft_printf("{%5.*s}", -5, 42);
    // printf("\n");
    //
    //
    // printf("[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]");
    // printf("\n");
	// printf("{%0-5.*d}", -15, -42);
    // printf("\n");
	// ft_printf("{%0-5.*d}", -15, -42);
    // printf("\n");
	/*
    //printf("\n'%C'", L'Á');
    //ft_printf("\n'%C'", L'Á');

    printf("\n");
    printf("\n");
	printf("'%010s' is a string", "this");
    printf("\n");
    printf("\n");
	ft_printf("'%010s' is a string", "this");
    printf("\n");
    printf("\n");
	printf("'%.0%'");
    printf("\n");
    printf("\n");
	ft_printf("'%.0%'");
    printf("\n");
    printf("\n");*/
    /*printf("\n'--------------------'");
    printf("\n'%5.d'",0);
    printf("\n'%.5d'",0);
    printf("\n'%0.5d",0);
    printf("\n'%5.0d",0);
    printf("\n'%0.0d",0);
    printf("\n'%1.5d",0);
    printf("\n'%5.1d",0);

    printf("\n{        <=>        }\n");

    ft_printf("\n'%5.d'",0);
    ft_printf("\n'%.5d'",0);
    ft_printf("\n'%0.5d",0);
    ft_printf("\n'%5.0d",0);
    ft_printf("\n'%0.0d",0);
    ft_printf("\n'%1.5d",0);
    ft_printf("\n'%5.1d",0);

    printf("\n'--------------------'");

    printf("\n'%5.d",-42);
    printf("\n'%.5d",-42);
    printf("\n'%0.5d'",-42);
    printf("\n'%5.0d'",-42);
    printf("\n'%0.0d'",-42);
    printf("\n'%1.5d'",-42);
    printf("\n'%5.1d'",-42);

    printf("\n{        <=>        }\n");

    ft_printf("\n'%5.d",-42);
    ft_printf("\n'%.5d",-42);
    ft_printf("\n'%0.5d'",-42);
    ft_printf("\n'%5.0d'",-42);
    ft_printf("\n'%0.0d'",-42);
    ft_printf("\n'%1.5d'",-42);
    ft_printf("\n'%5.1d'",-42);
    printf("\n'--------------------'");

    printf("\n'%-5.d'",424242);
    printf("\n'%-.5d'",424242);
    printf("\n'%-0.5d'",424242);
    printf("\n'%-5.0d'",424242);
    printf("\n'%-0.0d'",424242);
    printf("\n'%-1.5d'",424242);
    printf("\n'%+10.8d'",424242);

    printf("\n{        <=>        }\n");

    ft_printf("\n'%-5.d'",424242);
    ft_printf("\n'%-.5d'",424242);
    ft_printf("\n'%-0.5d'",424242);
    ft_printf("\n'%-5.0d'",424242);
    ft_printf("\n'%-0.0d'",424242);
    ft_printf("\n'%-1.5d'",424242);
    ft_printf("\n'%+10.8d'",424242);

    printf("\n'--------------------'");

    printf("\n'%5.d'",1);
    printf("\n'%.5d'",1);
    printf("\n'%0.5d'",1);
    printf("\n'%5.*d'",0,1);
    printf("\n'%0.0d'",1);
    printf("\n'%1.5d'",1);
    printf("\n'%5.1d'",1);
    */
//    printf("\n{        <=>        }\n");

    //ft_printf("\n'%5.d'",1);
    // i=printf("\n'{REgD%.5d'{EOidC}",1);
    // //ft_printf("\n'>>>>>>%d'",i);
    // printf("\n{        <=>        }\n");
    // printf("\n{        <=>        }\n");
    // i=ft_printf("\n'{REgD%.5d'{EOidC}",1);
    // printf("\n{        <=>        }\n");
    // printf("\n{        <=>        }\n");
    // printf("1/dkr{}{%+0-16.10d{}{}{{jkldas {} fdfds {gfd} } df { ", 42424242);
    // printf("\n{        <=>        }\n");
    // printf("\n{        <=>        }\n");
    // ft_printf("2/dkr'<{GREEN}>'{%+0-16.10d{}{}{{jkldas {} fdfds {gfd} } df { \n",42424242);
    // printf("\n{        <=>        }\n");
    // printf("\n{        <=>        }\n");
    // printf("\n{        <=>        }\n");
    // printf("\n{        <=>        }\n");
    // printf("\n");
    // ft_printf("3/rewrew{ gfgdfg fdgfd{EOC} gfd {RED}gfd gfd {EOC}N{YELLOW} /n");
    // printf("\n{        <=>        }\n");
    // ft_printf("\n{  '{RED{BLUE}RED}'        <=>        }\n");
    // ft_printf("\n{  '{{BLUE}RED}'        <=>        }\n");
    // ft_printf("\n{  '{RED{BLUE}}'        <=>        }\n");
    // ft_printf("\n{  '{ {RED{BLUE}RED}'        <=>        }\n");
    // ft_printf("\n{  '{RED{BLUE}RED} }'        <=>        }\n");


//    ft_printf("3/rewrew{ gfgdfg fdgfd{EOC} gfd {RED}gfd gfd {EOC}N{YELLOW} /n");
    //ft_printf("\n'<<<<<<%d'",i);
   //  ft_printf("\n'%0.5d'",1);
   //  ft_printf("\n'%5.0d'",1);
   // ft_printf("\n'%0.0d'",1);
   //  ft_printf("\n'%1.5d'",1);
   // ft_printf("\n'%5.1d'",1);
//    printf("\n'--------------------'");
    //printf("%f", 42.5);
//    printf("\n");

    // ft_printf("{  '{RED{BLUE}RED}'      }");
    // printf("\n");
    // ft_printf("{  '{{BLUE}RED}'        <=>        }");
    // printf("\n");
    // ft_printf("{  '{RED{BLUE}}'        <=>        }");
    // printf("\n");
    // ft_printf("{  '{ {RED{BLUE}RED}'        <=>        }");
    // printf("\n");
    // i=ft_printf("{'{RED{HIGHLIGHT}{BLINK}RED} }");
    // ft_printf("%d", i);
    // i=ft_printf("{'{REDRED} }");
    // ft_printf("%d", i);
    // printf("\n");
    // printf("%% salut\n");
    // ft_printf("%% salut\n");
    // ft_printf("%x salut\n", 0xfff);

	return (0);
}
