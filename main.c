#include "./includes/ft_printf.h"
#include "locale.h"
#include <limits.h>
#include <signal.h>
#include <stdio.h>

int		main(void)
{
	// ft_printf("{1:%010d}\n", 42);
	// printf("{1:%010d}\n", 42);
	//
	// ft_printf("2:{%010d}\n", -42);
	// printf("2:{%010d}\n", -42);
	//
	// ft_printf("3:{%04d}\n", 10000);
	// printf("3:{%04d}\n", 10000);
	//
	// ft_printf("4:{%030d\n}", 10000);
	// printf("4:{%030d\n}", 10000);
	//
	// ft_printf("5:{%030x}\n", 0xFFFF);
	// printf("5:{%030x}\n", 0xFFFF);

	// ft_printf("6:{%03c}\n", 0);
	// printf("6:{%03c}\n", 0);
	//
	// ft_printf("7:{%05s}\n", "abc");
	// printf("7:{%05s}\n", "abc");

	// // ft_printf("{%030S}", L"我是一只猫。");
	//
	// ft_printf("8:{%05p}", 0);
	// printf("8:{%05p}", 0);

	// ft_printf("1:{%-10d}\n", 42);
	// printf("1:{%-10d}\n", 42);
	//
	// ft_printf("2:{%-4d}\n", 10000);
	// printf("2:{%-4d}\n", 10000);
	//
	// ft_printf("len:%d\n", ft_printf("3:{%-30d}\n", 10000));
	// printf("len:%d\n", printf("3:{%-30d}\n", 10000));
// 	ft_printf("{%10d}\n", 42);
// 	printf("{%10d}\n", 42);
//
// 	ft_printf("{%4d}\n", 10000);
// 	printf("{%4d}\n", 10000);
//
// 	ft_printf("{%30d}\n", 10000);
// 	printf("{%30d}\n", 10000);

	// ft_printf("{%10d}\n", -42);
	// printf("{%10d}\n", -42);
	//
	// ft_printf("{%3c}\n", 0);
	// printf("{%3c}\n", 0);
	//
	// ft_printf("{%5p}\n", 0);
	// printf("{%5p}\n", 0);
	//
	// ft_printf("{%-15p}\n", 0);
	// printf("{%-15p}\n", 0);
	//
	// ft_printf("{%-13p}\n", &strlen);
	// printf("{%-13p}\n", &strlen);
	//
	// ft_printf("{%-12p}\n", &strlen);
	// printf("{%-12p}\n", &strlen);
	//
	// ft_printf("{%10R}\n");
	// printf("{%10R}\n");


	// ft_printf("%lp\n", 42);
	// printf("%lp\n", 42);
	// printf("%zO, %zO\n", 0, USHRT_MAX);
	// ft_printf("%zO, %zO\n", 0, USHRT_MAX);

	// ft_printf("%llu, %llu\n", 0, ULLONG_MAX);
	// printf("%llu, %llu", 0, ULLONG_MAX);

	// ft_printf("%ld\n", (long)INT_MAX + 1);
	// printf("%ld\n", (long)INT_MAX + 1);

	// ft_printf("%ld\n", (long)INT_MIN - 1);
	// printf("%ld", (long)INT_MIN - 1);

	// ft_printf("%ld\n", LONG_MAX);
	// printf("%ld\n", LONG_MAX);
	//
	// ft_printf("%ld\n", LONG_MIN);
	// printf("%ld\n", LONG_MIN);
	//
	// ft_printf("%li%li\n", 0, 42);
	// printf("%li%li\n", 0, 42);
	//
	// ft_printf("%li\n", (long)INT_MAX + 1);
	// printf("%li\n", (long)INT_MAX + 1);
	//
	// ft_printf("%li\n", (long)INT_MIN - 1);
	// printf("%li\n", (long)INT_MIN - 1);
	//
	// ft_printf("%li\n", LONG_MAX);
	// printf("%li\n", LONG_MAX);
	//
	// ft_printf("%li\n", LONG_MIN);
	// printf("%li\n", LONG_MIN);
	//
	// ft_printf("%lu, %lu\n", 0, ULONG_MAX);
	// printf("%lu, %lu\n", 0, ULONG_MAX);

	// ft_printf("%lo, %lo\n", 0, ULONG_MAX);
	// printf("%lo, %lo\n", 0, ULONG_MAX);

	// ft_printf("%lx, %lx\n", 0, ULONG_MAX);
	// printf("%lx, %lx\n", 0, ULONG_MAX);
	//
	// ft_printf("%lX, %lX\n", 0, ULONG_MAX);
	// printf("%lX, %lX\n", 0, ULONG_MAX);
	//
	// ft_printf("%lc, %lc\n", L'暖', L'ح');
	// printf("%lc, %lc\n", L'暖', L'ح');
	// //
	// ft_printf("%ls, %ls\n", L"暖炉", L"لحم خنزير");
	// printf("%ls, %ls\n", L"暖炉", L"لحم خنزير");
	//
	// ft_printf("%lO, %lO\n", 0, USHRT_MAX);
	// printf("%lO, %lO\n", 0, USHRT_MAX);
	//
	// ft_printf("%lU, %lU\n", 0, USHRT_MAX);
	// printf("%lU, %lU\n", 0, USHRT_MAX);
	//
	// ft_printf("%lD, %lD\n", 0, USHRT_MAX);
	// printf("%lD, %lD\n", 0, USHRT_MAX);


	// ft_printf("%U\n", ULONG_MAX);
	// printf("%U\n", ULONG_MAX);
	// char *test_simple_mix;
	//
	// test_simple_mix = "HELLO";
	// ft_printf("s: %s, p: %p, d:%d\n", "a string", &test_simple_mix, 42);
	// printf("s: %s, p: %p, d:%d\n", "a string", &test_simple_mix, 42);
	// ft_printf("%s%p%d%d%p%s%p%p%s", "a", &free, 1, 2, &malloc, "b", &free, &malloc, "c");
	// printf("%s%p%d%d%p%s%p%p%s", "a", &free, 1, 2, &malloc, "b", &free, &malloc, "c");
	// ft_printf("l:%d\n", ft_printf("2:aa%%bb"));
	// printf("l:%d\n", printf("2:aa%%bb"));

	// ft_printf("l:%d\n", ft_printf("3:%%%%%%%%%%"));
	// printf("l:%d\n", printf("3:%%%%%%%%%%"));

	// ft_printf("l:%d\n", ft_printf("4:.%%.%%.%%.%%.%%.%%.%%.%%."));
	// printf("l:%d\n", printf("4:.%%.%%.%%.%%.%%.%%.%%.%%."));

	// ft_printf("l:%d\n", ft_printf("5:%"));
	// printf("l:%d\n", printf("5:%"));

	// ft_printf("l:%d\n", ft_printf("6:% Zoooo"));
	// printf("l:%d\n", printf("6:% Zoooo"));

	// ft_printf("l:%d\n", ft_printf("7:{%}"));
	// printf("l:%d\n", printf("7:{%}"));
	//
	// ft_printf("l:%d\n", ft_printf("8:{% %}"));
	// printf("l:%d\n", printf("8:{% %}"));


	// ft_printf("a%ub%uc%ud\n", 0, 55555, 100000);
	// printf("a%ub%uc%ud\n", 0, 55555, 100000);
	// ft_printf("1:%O\n", 42);
	// printf("1:%O\n", 42);
	//
	// ft_printf("2:before %O after\n", 42);
	// printf("2:before %O after\n", 42);
	//
	// ft_printf("3:%O%O%O%O%O\n", 1, 100, 999, 42, 999988888);
	// printf("3:%O%O%O%O%O\n", 1, 100, 999, 42, 999988888);
	//
	// ft_printf("4:a%Ob%Oc%Od\n", 0, 55555, 100000);
	// printf("4:a%Ob%Oc%Od\n", 0, 55555, 100000);
	//
	// ft_printf("5:%O\n", LONG_MAX);
	// printf("5:%O\n", LONG_MAX);
	// ft_printf("1:%.4d\n", 42);
	// printf("1:%.4d\n", 42);
	//
	// ft_printf("2:%.4d\n", 424242);
	// printf("2:%.4d\n", 424242);
	//
	// ft_printf("3:%.4d\n", -424242);
	// ft_printf("3:%.4d\n", -424242);
	//
	// ft_printf("4:%15.4d\n", 42);
	// printf("4:%15.4d\n", 42);
	//
	// ft_printf("5:%15.4d\n", 424242);
	// printf("5:%15.4d\n", 424242);

	// ft_printf("6:%8.4d\n", 424242424);
	// printf("6:%8.4d\n", 424242424);
	//
	// ft_printf("7:%15.4d\n", -42);
	// printf("7:%15.4d\n", -42);
	//
	// ft_printf("8:%15.4d\n", -424242);
	// printf("8:%15.4d\n", -424242);
	//
	// ft_printf("9:%8.4d\n", -424242424);
	// printf("9:%8.4d\n", -424242424);
	//
	// ft_printf("10:%4.15d\n", 42);
	// printf("10:%4.15d\n", 42);
	//
	// ft_printf("11:%4.15d\n", 424242);
	// printf("11:%4.15d\n", 424242);
	//
	// ft_printf("12:%4.8d\n", 424242424);
	// printf("12:%4.8d\n", 424242424);
	//
	// ft_printf("13:%4.15d\n", -42);
	// printf("13:%4.15d\n", -42);
	//
	// ft_printf("14:%4.15d\n", -424242);
	// printf("14:%4.15d\n", -424242);
	//
	// ft_printf("15:%4.8d\n", -424242424);
	// printf("15:%4.8d\n", -424242424);
	//
	// ft_printf("16:%.d, %.0d\n", 0, 0);
	// printf("16:%.d, %.0d\n", 0, 0);
	//
	// ft_printf("17:%.10d\n", -42);
	// printf("17:%.10d\n", -42);
	//
	// ft_printf("18:%.4i\n", 42);
	// printf("18:%.4i\n", 42);
	//
	// ft_printf("19:%15.4i\n", 42);
	// printf("19:%15.4i\n", 42);
	//
	// ft_printf("20:%4.15i\n", 42);
	// printf("20:%4.15i\n", 42);
	//
	// ft_printf("21:%.i, %.0i\n", 0, 0);
	// printf("21:%.i, %.0i\n", 0, 0);
	//
	// ft_printf("22:%.4u\n", 42);
 // 	printf("22:%.4u\n", 42);
	//
	// ft_printf("23:%.4u\n", 424242);
	// printf("23:%.4u\n", 424242);
	//
	// ft_printf("24:%15.4u\n", 42);
 // 	printf("24:%15.4u\n", 42);
	//
	// ft_printf("25:%15.4u\n", 424242);
	// printf("25:%15.4u\n", 424242);
	//
	// ft_printf("26:%8.4u\n", 424242424);
	// printf("26:%8.4u\n", 424242424);
	//
	// ft_printf("27:%4.15u\n", 42);
	// printf("27:%4.15u\n", 42);
	//
	// ft_printf("28:%4.15u\n", 424242);
	// printf("28:%4.15u\n", 424242);
	//
	// ft_printf("29:%4.8u\n", 424242424);
	// printf("29:%4.8u\n", 424242424);
	//
	// ft_printf("len:%d\n" , ft_printf("30:%.u, %.0u\n", 0, 0));
	// printf("len:%d\n" , printf("30:%.u, %.0u\n", 0, 0));






	// ft_printf("%zd%zd\n", 0, 42);
	// printf("%zd%zd\n", 0, 42);
	//
	// ft_printf("%zd\n", LLONG_MAX);
	// printf("%zd\n", LLONG_MAX);
	//
	// ft_printf("%zi%zi\n", 0, 42);
	// printf("%zi%zi\n", 0, 42);
	//
	// ft_printf("%zi\n", LLONG_MAX);
	// printf("%zi\n", LLONG_MAX);
	//
	// ft_printf("%zu, %zu\n", 0, ULLONG_MAX);
	// printf("%zu, %zu\n", 0, ULLONG_MAX);
	//
	// ft_printf("%zo, %zo\n", 0, ULLONG_MAX);
	// printf("%zo, %zo\n", 0, ULLONG_MAX);
	//
	// ft_printf("%zx, %zx\n", 0, ULLONG_MAX);
	// printf("%zx, %zx\n", 0, ULLONG_MAX);
	//
	// ft_printf("%zX, %zX\n", 0, ULLONG_MAX);
	// printf("%zX, %zX\n", 0, ULLONG_MAX);
	//
	// ft_printf("%zO, %zO\n", 0, USHRT_MAX);
	// printf("%zO, %zO\n", 0, USHRT_MAX);
	//
	// ft_printf("%zU, %zU\n", 0, USHRT_MAX);
	// printf("%zU, %zU\n", 0, USHRT_MAX);
	//
	// ft_printf("%zD, %zD\n", 0, USHRT_MAX);
	// printf("%zD, %zD\n", 0, USHRT_MAX);
	// printf("v:%D", LONG_MIN);
	// ft_printf("f:%D", LONG_MIN);
	// ft_printf("1:%%\n");
	// printf("1:%%\n");
	// ft_printf("2:aa%%bb\n");
	// printf("2:aa%%bb\n");
	// ft_printf("3:%%%%%%%%%%\n");
	// printf("3:%%%%%%%%%%\n");
	// ft_printf("4:.%%.%%.%%.%%.%%.%%.%%.%%.\n");
	// printf("4:.%%.%%.%%.%%.%%.%%.%%.%%.\n");
	// ft_printf("5:%\n");
	// printf("5:%\n");
	// ft_printf("6:% Zoooo\n");
	// printf("6:% Zoooo\n");
	// ft_printf("7:{%}\n");
	// printf("7:{%}\n");
	// ft_printf("8:{% %}\n");
	// printf("8:{% %}\n");
	// unsigned long	l;
	// int 			i;
	// char			*str;
	//
	// i = 500;
	// l = 480489;
	// str = "HELLO WORLD";
	// ft_printf("1:%p\n", &i);
	// printf("1:%p\n", &i);
	// ft_printf("2:%p\n", &l);
	// printf("2:%p\n", &l);
	// ft_printf("3:%p\n", &str);
	// printf("3:%p\n", &str);
	// ft_printf("4:%p\n", &strlen);
	// printf("4:%p\n", &strlen);
	// ft_printf("5:%p\n", 0);
	// printf("5:%p\n", 0);

	//  printf("%d\n", ft_printf("%s", 0));
	//  printf("%d\n", printf("%s", 0));
	// printf("%d\n", ft_printf("before %o after\n", 42));
	// printf("%d\n", printf("before %o after\n", 42));
	// printf("%d\n", ft_printf("%o%o%o%o%o\n", 1, 100, 999, 42, 999988888));
	// printf("%d\n", printf("%o%o%o%o%o\n", 1, 100, 999, 42, 999988888));
	// printf("%d\n", ft_printf("a%ob%oc%od\n", 0, 55555, 100000));
	// printf("%d\n", printf("a%ob%oc%od\n", 0, 55555, 100000));
// 	ft_printf("1:%#o\n", 42);
// 	printf("1:%#o\n", 42);
//
//
// ft_printf("2:%#o\n", 0);
// printf("2:%#o\n", 0);
//
//
// ft_printf("3:%#o\n", INT_MAX);
// printf("3:%#o\n", INT_MAX);
//
// ft_printf("4:%#O\n", 1);
// printf("4:%#O\n", 1);
//
// ft_printf("5:%#x\n", 42);
// printf("5:%#x\n", 42);
//
// ft_printf("6:%#x\n", 0);
// printf("6:%#x\n", 0);
// //
// ft_printf("7:%#x\n", INT_MAX);
// printf("7:%#x\n", INT_MAX);
//
// ft_printf("8:%#X\n", 42);
// printf("8:%#X\n", 42);
//
// ft_printf("9:%#X\n", 0);
// printf("9:%#X\n", 0);
//
// ft_printf("10:%#X\n", INT_MAX);
// printf("10:%#X\n", INT_MAX);
//
// ft_printf("11:%#c\n", 0);
// printf("11:%#c\n", 0);
	// printf("%d\n", ft_printf("{%-10d}\n", 42));
	// printf("%d\n",printf("{%-10d}\n", 42));
	// printf("%d\n",ft_printf("{%-4d}\n", 10000));
	// printf("%d\n",printf("{%-4d}\n", 10000));
	// printf("%d\n",ft_printf("{%-30d}\n", 10000));
	// printf("%d\n",printf("{%-30d}\n", 10000));
	// ft_printf("0:%ld%ld\n", 0, 42);
	// printf("0:%ld%ld\n", 0, 42);
	//
	//
	// ft_printf("1:%ld\n", (long)INT_MAX + 1);
	// printf("1:%ld\n", (long)INT_MAX + 1);
	//
	// ft_printf("2:%ld\n", (long)INT_MIN - 1);
	// printf("2:%ld\n", (long)INT_MIN - 1);
	//
	// ft_printf("3:%ld\n", LONG_MAX);
	// printf("3:%ld\n", LONG_MAX);
	//
	// ft_printf("4:%ld\n", LONG_MIN);
	// printf("4:%ld\n", LONG_MIN);
	//
	// ft_printf("5:%li%li\n", 0, 42);
	// printf("5:%li%li\n", 0, 42);
	//
	// ft_printf("6:%li\n", (long)INT_MAX + 1);
	// printf("6:%li\n", (long)INT_MAX + 1);
	//
	// ft_printf("7:%li\n", (long)INT_MIN - 1);
	// printf("7:%li\n", (long)INT_MIN - 1);
	//
	// ft_printf("8:%li\n", LONG_MAX);
	// printf("8:%li\n", LONG_MAX);
	//
	// ft_printf("9:%li\n", LONG_MIN);
	// printf("9:%li\n", LONG_MIN);









	// ft_printf("10:%lu, %lu\n", 0, ULONG_MAX);
	// printf("10:%lu, %lu\n", 0, ULONG_MAX);

	// ft_printf("11:%lo, %lo\n", 0, ULONG_MAX);
	// printf("11:%lo, %lo\n", 0, ULONG_MAX);
	//
	// ft_printf("12:%lx, %lx\n", 0, ULONG_MAX);
	// printf("12:%lx, %lx\n", 0, ULONG_MAX);

	// ft_printf("13:%lX, %lX\n", 0, ULONG_MAX);
	// printf("13:%lX, %lX\n", 0, ULONG_MAX);










//
// 	ft_printf("%lc, %lc\n", L'暖', L'ح');
// ft_printf("%lc, %lc\n", L'暖', L'ح');
//
// ft_printf("%ls, %ls\n", L"暖炉", L"لحم خنزير");

	// ft_printf("%lO, %lO\n", 0, USHRT_MAX);
	// printf("%lO, %lO\n", 0, USHRT_MAX);
	//
	// ft_printf("%lU, %lU\n", 0, USHRT_MAX);
	// printf("%lU, %lU\n", 0, USHRT_MAX);
	//
	// ft_printf("%lD, %lD\n", 0, USHRT_MAX);
	// printf("%lD, %lD\n", 0, USHRT_MAX);



	// ft_printf("f:%.0p, %.p\n", 0, 0);
	// printf("v:%.0p, %.p\n", 0, 0);
	// ft_printf("f:%.5p\n", 0);
	// printf("v:%.5p\n", 0);
	// ft_printf("f:%9.2p\n", 1234);
	// printf("v:%9.2p\n", 1234);
	// ft_printf("f:%9.2p\n", 1234567);
	// printf("v:%9.2p\n", 1234567);
	// ft_printf("f:%2.9p\n", 1234);
	// printf("v:%2.9p\n", 1234);
	// ft_printf("f:%2.9p\n", 1234567);
	// printf("v:%2.9p\n", 1234567);
// ft_printf("%#.o, %#.0o", 0, 0);
//
// ft_printf("%#.x, %#.0x", 0, 0);
// //
// ft_printf("%.p, %.0p", 0, 0);

// ft_printf("{%05.c}", 0);

//ft_printf("{%05.s}", 0);

// ft_printf("{%05.%}", 0);

// ft_printf("{%05.Z}", 0);
//
// ft_printf("{%#.5x}", 1);
//
// ft_printf("%#.3o", 1);
//
// ft_printf("{%05.S}", L"42 c est cool");

//	char c;

//	ft_printf("%s %C %d %p %x %% %S", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
//	ft_printf("%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
// ft_printf("lenF:%d\n", ft_printf("%jd", LLONG_MIN));
// printf("lenv:%d\n", printf("%jd", LLONG_MIN));
//
// ft_printf("lenF:%d\n", ft_printf("%jX, %jX", 0, ULLONG_MAX));
// printf("lenv:%d\n", printf("%jX, %jX", 0, ULLONG_MAX));
//
// ft_printf("lenf:%d\n", ft_printf("%jO, %jO", 0, USHRT_MAX));
// printf("lenv:%d\n", printf("%jO, %jO", 0, USHRT_MAX));
// ft_printf("lenf:%d\n", ft_printf("%jU, %jU", 0, USHRT_MAX));
// printf("lenv:%d\n", printf("%jU, %jU", 0, USHRT_MAX));
// ft_printf("lenf:%d\n", ft_printf("%jD, %jD", 0, USHRT_MAX));
// printf("lenv:%d\n", printf("%jD, %jD", 0, USHRT_MAX));
	// ft_printf("len:%D\n", ft_printf("%.C", 0));
	// printf("len:%D\n", printf("%.C", 0));
//
// 	ft_printf("len1:%D\n", ft_printf("FAKE:before %x after\n", 42));
// 	printf("len1:%D\n", printf("REAL:before %x after\n", 42));
// //
// 	ft_printf("len2:%D\n", ft_printf("FAKE:%x%x%x%x%x\n",
// 	1, 100, 999, 42, 999988888));
// 	printf("len2:%D\n", printf("REAL:%x%x%x%x%x\n",
// 		1, 100, 999, 42, 999988888));
// 			ft_printf("lenf3:%D\n",ft_printf("FAKE:a%xb%xc%xd\n",
// 		0, 55555, 100000));
// 	printf("lenv3:%D\n", printf("REAL:a%xb%xc%xd\n",
// 			0, 55555, 100000));
// printf("len4:%D\n", ft_printf("FAKE:%x, %x\n", 0, UINT_MAX));
// 	printf("len4:%D\n", printf("REAL:%x, %x\n", 0, UINT_MAX));
//
// 		ft_printf("FAKE0:%zd%zd\n", 0, 42);
// 		printf("REAL0:%zd%zd\n", 0, 42);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE1:%zd\n", LLONG_MAX);
// 		printf("REAL1:%zd\n", LLONG_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE2:%zi%zi\n", 0, 42);
// 		printf("REAL2:%zi%zi\n", 0, 42);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE3:%zi\n", LLONG_MAX);
// 		printf("REAL3:%zi\n", LLONG_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE4:%zu, %zu\n", 0, ULLONG_MAX);
// 		printf("REAL4:%zu, %zu\n", 0, ULLONG_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE6:%zx, %zx\n", 0, ULLONG_MAX);
// 		printf("REAL6:%zx, %zx\n", 0, ULLONG_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE7:%zX, %zX\n", 0, ULLONG_MAX);
// 		printf("REAL7:%zX, %zX\n", 0, ULLONG_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE8:%zO, %zO\n", 0, USHRT_MAX);
// 		printf("REAL8:%zO, %zO\n", 0, USHRT_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE9:%zU, %zU\n", 0, USHRT_MAX);
// 		printf("REAL9:%zU, %zU\n", 0, USHRT_MAX);
// 		ft_printf("\n-----------------------------\n");
// 		ft_printf("FAKE10:%zD, %zD\n", 0, USHRT_MAX);
// 		printf("REAL10:%zD, %zD\n", 0, USHRT_MAX);
		// ft_printf("\n-----------------------------\n");
// 	ft_printf("%.4d\n", 42);
// 	printf("%.4d\n", 42);
//     ft_printf("%.4d\n", 424242);
// 	printf("%.4d\n", 424242);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%.4d\n", -424242);
// 	printf("%.4d\n", -424242);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%15.4d\n", 42);
// 	printf("%15.4d\n", 42);
// 	ft_printf("\n-----------------------------\n");
// 	ft_printf("%15.4d\n", 424242);
// 	printf("%15.4d\n", 424242);
// // 	ft_printf("\n-----------------------------\n");
//  	ft_printf("%8.4d\n", 424242424);
//  	printf("%8.4d\n", 424242424);
// ft_printf("\n-----------------------------\n");
//  	ft_printf("%15.4d\n", -42);
//  	printf("%15.4d\n", -42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%15.4d\n", -424242);
// 	printf("%15.4d\n", -424242);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%8.4d\n", -424242424);
// 	printf("%8.4d\n", -424242424);
// // 	ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.15d\n", 42);
// 	printf("%4.15d\n", 42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.15d\n", 424242);
// 	printf("%4.15d\n", 424242);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.8d\n", 424242424);
// 	printf("%4.8d\n", 424242424);
// // ft_printf("\n-----------------------------\n");
	// ft_printf("%4.15d\n", -42);
	// printf("%4.15d\n", -42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.15d\n", -424242);
// 	printf("%4.15d\n", -424242);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.8d\n", -424242424);
// 	printf("%4.8d\n", -424242424);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%.d, %.0d\n", 0, 0);
// 	printf("%.d, %.0d\n", 0, 0);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%.10d\n", -42);
// 	printf("%.10d\n", -42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%.4i\n", 42);
// 	printf("%.4i\n", 42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%15.4i\n", 42);
// 	printf("%15.4i\n", 42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.15i\n", 42);
// 	printf("%4.15i\n", 42);
// // ft_printf("\n-----------------------------\n");
// 	ft_printf("%.i, %.0i\n", 0, 0);
// 	printf("%.i, %.0i\n", 0, 0);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%.4u", 42);
// 	printf("%.4u\n", 42);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%.4u", 424242);
// 	printf("%.4u\n", 424242);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%15.4u", 42);
// 	printf("%15.4u\n", 42);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%15.4u", 424242);
// 	printf("%15.4u\n", 424242);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%8.4u", 424242424);
// 	printf("%8.4u\n", 424242424);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.15u", 42);
// 	printf("%4.15u\n", 42);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.15u", 424242);
// 	printf("%4.15u\n", 424242);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%4.8u", 424242424);
// 	printf("%4.8u\n", 424242424);
// ft_printf("\n-----------------------------\n");
// 	ft_printf("%.u, %.0u", 0, 0);
// 	printf("%.u, %.0u\n", 0, 0);
// ft_printf("\n-----------------------------\n");




	// ft_printf("\n-----------------------------\n");
	// ft_printf("len:%d", ft_printf("%lu", "-42"));
	// printf("len:%d", printf("%lu", "-42"));
	// ft_printf("\n-----------------------------\n");
		// ft_printf("{%30d}", 10000);
		// printf("\n-----------------------------\n");
		// ft_printf("{%10d}", -42);
		// printf("\n-----------------------------\n");
		// ft_printf("{%3c}", 0);
		// printf("\n-----------------------------\n");
		// ft_printf("{%5p}", 0);
		// printf("\n-----------------------------\n");
		// ft_printf("{%-15p}", 0);
		// printf("\n-----------------------------\n");
		// ft_printf("{%-13p}", &strlen);
		// ft_printf("{%-12p}", &strlen);
		// ft_printf("{%10R}");
		// ft_printf("{%30S}", L"我是一只猫。");
		// ft_printf("{%-30S}", L"我是一只猫。");
	//ft_printf("111%s333%s555", "222", "444");
	//ft_printf("111%s333%s555%saaa%sccc",
	//	"222", "444", "666", "bbb");
//ft_printf("111%s333%s555%saaa%sccc", "222", "444", "666", "bbb");
	// ft_printf("%s%s%s%s%s");
	// ft_printf("%s", "abc");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("111%s333", "222");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%s333", "222");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("111%s", "222");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("{%s}", 0);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("{%s}", "");
	// ft_printf("\n-----------------------------\n");
	// printf("%s", "abc");
	// printf("\n-----------------------------\n");
	// printf("111%s333", "222");
	// printf("\n-----------------------------\n");
	// printf("%s333", "222");
	// printf("\n-----------------------------\n");
	// printf("111%s", "222");
	// printf("\n-----------------------------\n");
	// printf("{%s}", 0);
	// printf("\n-----------------------------\n");
	// printf("{%s}", "");
	// printf("\n-----------------------------\n");
	// ft_printf("This is a simple test.");
	// ft_printf("This is a simple test.\nSecond sentence.\n");
	// ft_printf("");
	// ft_printf("len:%d", ft_printf(""));
	// printf("len:%d", printf(""));
	//ft_printf("\n");
	//ft_printf("\n-----------------------------\n");
	// printf("This is a simple test.");
	// printf("This is a simple test.\nSecond sentence.\n");
	// printf("len0:%d", printf(""));
	// printf("\n");
	// ft_printf("%hhd%hhd", 1, 42);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhd", CHAR_MAX);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhd", CHAR_MAX + 42);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhd", CHAR_MIN);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhd", CHAR_MIN - 42);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhi%hhi", 0, 42);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhd", CHAR_MAX);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhd\n", CHAR_MAX + 42);
	// printf("%hhd\n", CHAR_MAX + 42);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhi", CHAR_MIN);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhi", CHAR_MIN - 42);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhu, %hhu", 0, UCHAR_MAX);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hho, %hho", 0, UCHAR_MAX);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhx, %hhx", 0, UCHAR_MAX);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhX, %hhX", 0, UCHAR_MAX);
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%hhu, %hhu\n", 0, UCHAR_MAX + 42);
	// printf("%hhu, %hhu\n", 0, UCHAR_MAX + 42);

	// ft_printf("f:%hho, %hho\n", 0, UCHAR_MAX + 42);
	// printf("v:%hho, %hho\n", 0, UCHAR_MAX + 42);
	//
	// ft_printf("%hhx, %hhx\n", 0, UCHAR_MAX + 42);
	// printf("%hhx, %hhx\n", 0, UCHAR_MAX + 42);
	//
	// ft_printf("%hhX, %hhX\n", 0, UCHAR_MAX + 42);
	// printf("%hhX, %hhX\n", 0, UCHAR_MAX + 42);
	//
	// ft_printf("%hhO, %hhO\n", 0, USHRT_MAX);
	// printf("%hhO, %hhO\n", 0, USHRT_MAX);
	//
	// ft_printf("%hhU, %hhU\n", 0, USHRT_MAX);
	// printf("%hhU, %hhU\n", 0, USHRT_MAX);
	//
	// ft_printf("%hhD, %hhD\n", 0, USHRT_MAX);
	// printf("%hhD, %hhD\n", 0, USHRT_MAX);



	// ft_printf("%hhC, %hhC", 0, L'米');
	// ft_printf("%hhS, %hhS", 0, L"米米");
	// ft_printf("\n-----------------------------\n");
		// ft_printf("%d", 42);
		// ft_printf("\n-----------------------------\n");
		// ft_printf("%d", -42);
		// ft_printf("\n-----------------------------\n");
		// ft_printf("before %d after", 42);
		// ft_printf("\n-----------------------------\n");
		// ft_printf("%d%d%d%d%d", 1, -2, 3, -4, 5);
		// ft_printf("\n-----------------------------\n");
		// ft_printf("a%db%dc%dd", 1, -2, 3);
		// ft_printf("\n-----------------------------\n");
		// ft_printf("%d", INT_MAX);
		// ft_printf("\n-----------------------------\n");
		// ft_printf("%d", INT_MIN);
		// ft_printf("Len:%d\n", ft_printf("%lu", -42));
		// printf("Len:%d", printf("%lu", -42));
		// ft_printf("{%04d}", 10000);
		// ft_printf("{%030d}", 10000);
		// ft_printf("{%030x}", 0xFFFF);
		// ft_printf("{%030X}", 0xFFFF);
		// ft_printf("{%03c}", 0);
		// ft_printf("{%05s}", "abc");
		// ft_printf("{%030S}", L"我是一只猫。");
		// ft_printf("{%05p}", 0);
		// ft_printf("{%05p}", &pointer_valueLargerThanMinWidth_zeroFlag);
	// ft_printf("111%s333%s555", "222", "444");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("111%s333%s555%saaa%sccc", "222", "444", "666", "bbb");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("%s%s%s%s%s", "1", "2", "3", "4", "5");
	//ft_printf("len:%d\n", ft_printf("%lu", -42));
	// ft_printf("This is a simple test.");
	// printf("This is a simple test.");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("This is a simple test.\nSecond sentence.\n");
	// printf("This is a simple test.\nSecond sentence.\n");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("");
	// printf("");
	// ft_printf("\n-----------------------------\n");
	// ft_printf("111%s333%s555%saaa%sccc",
	// 	"222", "444", "666", "bbb");
	// ft_printf("%s%s%s%s%s",
	// 	"1", "2", "3", "4", "5");
	//printf("\n");
//	printf("111%s333", "222");
	//printf("len:%d", printf("%lu", -42));
	/* setlocale(LC_ALL, "");
	ft_printf("FAKE = '%0.0d'\n", -42);
	printf("REAL = '%0.0d'\n", -42);
	ft_printf("FAKE = '%0d'\n", -42);
	printf("REAL = '%0d'\n", -42);
	ft_printf("FAKE = '%#d'\n", -42);
	printf("REAL = '%#d'\n", -42);
	ft_printf("FAKE = '%10d'\n", -42);
	printf("REAL = '%10d'\n", -42);
	ft_printf("FAKE = '%10.0d'\n", 0);
	printf("REAL = '%10.0d'\n", 0);
	ft_printf("FAKE = '%0d'\n", 0);
	printf("REAL = '%0d'\n", 0);
	ft_printf("FAKE = '%.0d'\n", 0);
	printf("REAL = '%.0d'\n", 0);
	ft_printf("FAKE = '%#.2d'\n", 0);
	printf("REAL = '%#.2d'\n", 0);
	ft_printf("FAKE = '%#20d'\n", 0);
	printf("REAL = '%#20d'\n", 0);
	ft_printf("FAKE = '%#-20d'\n", 55);
	printf("REAL = '%#-20d'\n", 55);
	ft_printf("FAKE = '%0d'\n", 55);
	printf("REAL = '%0d'\n", 55);
	ft_printf("FAKE = '%.0d'\n", 55);
	printf("REAL = '%.0d'\n", 55);
	ft_printf("FAKE = '%#.2d'\n", 55);
	printf("REAL = '%#.2d'\n", 55);
	ft_printf("FAKE = '%#20d'\n", 55);
	printf("REAL = '%#20d'\n", 55);
	ft_printf("FAKE = '%#-20d'\n", 55);
	printf("REAL = '%#-20d'\n", 55);
	ft_printf("FAKE = '%#-20d'd'\n", 55);
	printf("REAL = '%#-20d'd'\n", 55);
	ft_printf("FAKE = '%0.0d'\n", 0);
	printf("REAL = '%0.0d'\n", 0);
	ft_printf("FAKE = '%#.20d'\n", 0);
	printf("REAL = '%#.20d'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%lld'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lld'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lld'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lld'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lld'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lld'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lld'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lld'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%ld'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%ld'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%ld'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%ld'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.ld'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.ld'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.ld'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.ld'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%d'\n", INT_MAX);
	printf("REAL = INT_MAX      '%d'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%d'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%d'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.d'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.d'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.d'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.d'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hd'\n", 32767);
	printf("REAL = SHORT_MAX      '%hd'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hd'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hd'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hd'\n", -32768);
	printf("REAL = SHORT_MIN      '%hd'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hd'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hd'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhd'\n", 127);
	printf("REAL = CHAR_MAX      '%hhd'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhd'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhd'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhd'\n", -128);
	printf("REAL = CHAR_MIN      '%hhd'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhd'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhd'\n", -129);


	ft_printf("FAKE = '%0.0D'\n", -42);
	printf("REAL = '%0.0D'\n", -42);
	ft_printf("FAKE = '%0D'\n", -42);
	printf("REAL = '%0D'\n", -42);
	ft_printf("FAKE = '%#D'\n", -42);
	printf("REAL = '%#D'\n", -42);
	ft_printf("FAKE = '%10D'\n", -42);
	printf("REAL = '%10D'\n", -42);
	ft_printf("FAKE = '%10.0D'\n", 0);
	printf("REAL = '%10.0D'\n", 0);
	ft_printf("FAKE = '%0D'\n", 0);
	printf("REAL = '%0D'\n", 0);
	ft_printf("FAKE = '%.0D'\n", 0);
	printf("REAL = '%.0D'\n", 0);
	ft_printf("FAKE = '%#.2D'\n", 0);
	printf("REAL = '%#.2D'\n", 0);
	ft_printf("FAKE = '%#20D'\n", 0);
	printf("REAL = '%#20D'\n", 0);
	ft_printf("FAKE = '%#-20D'\n", 55);
	printf("REAL = '%#-20D'\n", 55);
	ft_printf("FAKE = '%0D'\n", 55);
	printf("REAL = '%0D'\n", 55);
	ft_printf("FAKE = '%.0D'\n", 55);
	printf("REAL = '%.0D'\n", 55);
	ft_printf("FAKE = '%#.2D'\n", 55);
	printf("REAL = '%#.2D'\n", 55);
	ft_printf("FAKE = '%#20D'\n", 55);
	printf("REAL = '%#20D'\n", 55);
	ft_printf("FAKE = '%#-20D'\n", 55);
	printf("REAL = '%#-20D'\n", 55);
	ft_printf("FAKE = '%#-20D'D'\n", 55);
	printf("REAL = '%#-20D'D'\n", 55);
	ft_printf("FAKE = '%0.0D'\n", 0);
	printf("REAL = '%0.0D'\n", 0);
	ft_printf("FAKE = '%#.20D'\n", 0);
	printf("REAL = '%#.20D'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llD'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llD'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llD'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llD'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llD'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llD'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llD'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llD'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lD'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lD'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lD'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lD'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lD'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lD'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lD'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lD'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%D'\n", INT_MAX);
	printf("REAL = INT_MAX      '%D'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%D'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%D'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.D'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.D'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.D'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.D'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hD'\n", 32767);
	printf("REAL = SHORT_MAX      '%hD'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hD'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hD'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hD'\n", -32768);
	printf("REAL = SHORT_MIN      '%hD'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hD'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hD'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhD'\n", 127);
	printf("REAL = CHAR_MAX      '%hhD'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhD'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhD'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhD'\n", -128);
	printf("REAL = CHAR_MIN      '%hhD'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhD'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhD'\n", -129);


	ft_printf("FAKE = '%0.0x'\n", -42);
	printf("REAL = '%0.0x'\n", -42);
	ft_printf("FAKE = '%0x'\n", -42);
	printf("REAL = '%0x'\n", -42);
	ft_printf("FAKE = '%#x'\n", -42);
	printf("REAL = '%#x'\n", -42);
	ft_printf("FAKE = '%10x'\n", -42);
	printf("REAL = '%10x'\n", -42);
	ft_printf("FAKE = '%10.0x'\n", 0);
	printf("REAL = '%10.0x'\n", 0);
	ft_printf("FAKE = '%0x'\n", 0);
	printf("REAL = '%0x'\n", 0);
	ft_printf("FAKE = '%.0x'\n", 0);
	printf("REAL = '%.0x'\n", 0);
	ft_printf("FAKE = '%#.2x'\n", 0);
	printf("REAL = '%#.2x'\n", 0);
	ft_printf("FAKE = '%#20x'\n", 0);
	printf("REAL = '%#20x'\n", 0);
	ft_printf("FAKE = '%#-20x'\n", 55);
	printf("REAL = '%#-20x'\n", 55);
	ft_printf("FAKE = '%0x'\n", 55);
	printf("REAL = '%0x'\n", 55);
	ft_printf("FAKE = '%.0x'\n", 55);
	printf("REAL = '%.0x'\n", 55);
	ft_printf("FAKE = '%#.2x'\n", 55);
	printf("REAL = '%#.2x'\n", 55);
	ft_printf("FAKE = '%#20x'\n", 55);
	printf("REAL = '%#20x'\n", 55);
	ft_printf("FAKE = '%#-20x'\n", 55);
	printf("REAL = '%#-20x'\n", 55);
	ft_printf("FAKE = '%#-20x'x'\n", 55);
	printf("REAL = '%#-20x'x'\n", 55);
	ft_printf("FAKE = '%0.0x'\n", 0);
	printf("REAL = '%0.0x'\n", 0);
	ft_printf("FAKE = '%#.20x'\n", 0);
	printf("REAL = '%#.20x'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llx'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llx'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llx'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llx'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llx'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llx'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llx'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llx'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lx'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lx'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lx'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lx'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lx'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lx'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lx'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lx'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%x'\n", INT_MAX);
	printf("REAL = INT_MAX      '%x'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%x'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%x'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.x'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.x'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.x'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.x'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hx'\n", 32767);
	printf("REAL = SHORT_MAX      '%hx'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hx'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hx'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hx'\n", -32768);
	printf("REAL = SHORT_MIN      '%hx'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hx'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hx'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhx'\n", 127);
	printf("REAL = CHAR_MAX      '%hhx'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhx'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhx'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhx'\n", -128);
	printf("REAL = CHAR_MIN      '%hhx'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhx'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhx'\n", -129);



	ft_printf("FAKE = '%0.0X'\n", -42);
	printf("REAL = '%0.0X'\n", -42);
	ft_printf("FAKE = '%0X'\n", -42);
	printf("REAL = '%0X'\n", -42);
	ft_printf("FAKE = '%#X'\n", -42);
	printf("REAL = '%#X'\n", -42);
	ft_printf("FAKE = '%10X'\n", -42);
	printf("REAL = '%10X'\n", -42);
	ft_printf("FAKE = '%10.0X'\n", 0);
	printf("REAL = '%10.0X'\n", 0);
	ft_printf("FAKE = '%0X'\n", 0);
	printf("REAL = '%0X'\n", 0);
	ft_printf("FAKE = '%.0X'\n", 0);
	printf("REAL = '%.0X'\n", 0);
	ft_printf("FAKE = '%#.2X'\n", 0);
	printf("REAL = '%#.2X'\n", 0);
	ft_printf("FAKE = '%#20X'\n", 0);
	printf("REAL = '%#20X'\n", 0);
	ft_printf("FAKE = '%#-20X'\n", 55);
	printf("REAL = '%#-20X'\n", 55);
	ft_printf("FAKE = '%0X'\n", 55);
	printf("REAL = '%0X'\n", 55);
	ft_printf("FAKE = '%.0X'\n", 55);
	printf("REAL = '%.0X'\n", 55);
	ft_printf("FAKE = '%#.2X'\n", 55);
	printf("REAL = '%#.2X'\n", 55);
	ft_printf("FAKE = '%#20X'\n", 55);
	printf("REAL = '%#20X'\n", 55);
	ft_printf("FAKE = '%#-20X'\n", 55);
	printf("REAL = '%#-20X'\n", 55);
	ft_printf("FAKE = '%#-20X'X'\n", 55);
	printf("REAL = '%#-20X'X'\n", 55);
	ft_printf("FAKE = '%0.0X'\n", 0);
	printf("REAL = '%0.0X'\n", 0);
	ft_printf("FAKE = '%#.20X'\n", 0);
	printf("REAL = '%#.20X'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llX'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llX'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llX'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llX'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llX'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llX'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llX'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llX'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lX'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lX'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lX'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lX'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lX'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lX'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lX'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lX'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%X'\n", INT_MAX);
	printf("REAL = INT_MAX      '%X'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%X'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%X'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.X'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.X'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.X'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.X'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hX'\n", 32767);
	printf("REAL = SHORT_MAX      '%hX'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hX'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hX'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hX'\n", -32768);
	printf("REAL = SHORT_MIN      '%hX'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hX'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hX'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhX'\n", 127);
	printf("REAL = CHAR_MAX      '%hhX'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhX'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhX'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhX'\n", -128);
	printf("REAL = CHAR_MIN      '%hhX'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhX'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhX'\n", -129);


	ft_printf("FAKE = '%0.0o'\n", -42);
	printf("REAL = '%0.0o'\n", -42);
	ft_printf("FAKE = '%0o'\n", -42);
	printf("REAL = '%0o'\n", -42);
	ft_printf("FAKE = '%#o'\n", -42);
	printf("REAL = '%#o'\n", -42);
	ft_printf("FAKE = '%10o'\n", -42);
	printf("REAL = '%10o'\n", -42);
	ft_printf("FAKE = '%10.0o'\n", 0);
	printf("REAL = '%10.0o'\n", 0);
	ft_printf("FAKE = '%0o'\n", 0);
	printf("REAL = '%0o'\n", 0);
	ft_printf("FAKE = '%.0o'\n", 0);
	printf("REAL = '%.0o'\n", 0);
	ft_printf("FAKE = '%#.2o'\n", 0);
	printf("REAL = '%#.2o'\n", 0);
	ft_printf("FAKE = '%#20o'\n", 0);
	printf("REAL = '%#20o'\n", 0);
	ft_printf("FAKE = '%#-20o'\n", 55);
	printf("REAL = '%#-20o'\n", 55);
	ft_printf("FAKE = '%0o'\n", 55);
	printf("REAL = '%0o'\n", 55);
	ft_printf("FAKE = '%.0o'\n", 55);
	printf("REAL = '%.0o'\n", 55);
	ft_printf("FAKE = '%#.2o'\n", 55);
	printf("REAL = '%#.2o'\n", 55);
	ft_printf("FAKE = '%#20o'\n", 55);
	printf("REAL = '%#20o'\n", 55);
	ft_printf("FAKE = '%#-20o'\n", 55);
	printf("REAL = '%#-20o'\n", 55);
	ft_printf("FAKE = '%#-20o'o'\n", 55);
	printf("REAL = '%#-20o'o'\n", 55);
	ft_printf("FAKE = '%0.0o'\n", 0);
	printf("REAL = '%0.0o'\n", 0);
	ft_printf("FAKE = '%#.20o'\n", 0);
	printf("REAL = '%#.20o'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llo'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llo'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llo'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llo'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llo'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llo'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llo'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llo'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lo'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lo'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lo'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lo'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lo'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lo'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lo'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lo'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%o'\n", INT_MAX);
	printf("REAL = INT_MAX      '%o'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%o'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%o'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.o'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.o'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.o'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.o'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%ho'\n", 32767);
	printf("REAL = SHORT_MAX      '%ho'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%ho'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%ho'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%ho'\n", -32768);
	printf("REAL = SHORT_MIN      '%ho'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%ho'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%ho'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hho'\n", 127);
	printf("REAL = CHAR_MAX      '%hho'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hho'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hho'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hho'\n", -128);
	printf("REAL = CHAR_MIN      '%hho'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hho'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hho'\n", -129);


	ft_printf("FAKE = '%0.0O'\n", -42);
	printf("REAL = '%0.0O'\n", -42);
	ft_printf("FAKE = '%0O'\n", -42);
	printf("REAL = '%0O'\n", -42);
	ft_printf("FAKE = '%#O'\n", -42);
	printf("REAL = '%#O'\n", -42);
	ft_printf("FAKE = '%10O'\n", -42);
	printf("REAL = '%10O'\n", -42);
	ft_printf("FAKE = '%10.0O'\n", 0);
	printf("REAL = '%10.0O'\n", 0);
	ft_printf("FAKE = '%0O'\n", 0);
	printf("REAL = '%0O'\n", 0);
	ft_printf("FAKE = '%.0O'\n", 0);
	printf("REAL = '%.0O'\n", 0);
	ft_printf("FAKE = '%#.2O'\n", 0);
	printf("REAL = '%#.2O'\n", 0);
	ft_printf("FAKE = '%#20O'\n", 0);
	printf("REAL = '%#20O'\n", 0);
	ft_printf("FAKE = '%#-20O'\n", 55);
	printf("REAL = '%#-20O'\n", 55);
	ft_printf("FAKE = '%0O'\n", 55);
	printf("REAL = '%0O'\n", 55);
	ft_printf("FAKE = '%.0O'\n", 55);
	printf("REAL = '%.0O'\n", 55);
	ft_printf("FAKE = '%#.2O'\n", 55);
	printf("REAL = '%#.2O'\n", 55);
	ft_printf("FAKE = '%#20O'\n", 55);
	printf("REAL = '%#20O'\n", 55);
	ft_printf("FAKE = '%#-20O'\n", 55);
	printf("REAL = '%#-20O'\n", 55);
	ft_printf("FAKE = '%#-20O'O'\n", 55);
	printf("REAL = '%#-20O'O'\n", 55);
	ft_printf("FAKE = '%0.0O'\n", 0);
	printf("REAL = '%0.0O'\n", 0);
	ft_printf("FAKE = '%#.20O'\n", 0);
	printf("REAL = '%#.20O'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llO'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llO'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llO'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llO'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llO'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llO'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llO'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llO'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lO'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lO'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lO'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lO'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lO'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lO'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lO'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lO'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%O'\n", INT_MAX);
	printf("REAL = INT_MAX      '%O'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%O'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%O'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.O'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.O'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.O'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.O'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hO'\n", 32767);
	printf("REAL = SHORT_MAX      '%hO'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hO'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hO'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hO'\n", -32768);
	printf("REAL = SHORT_MIN      '%hO'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hO'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hO'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhO'\n", 127);
	printf("REAL = CHAR_MAX      '%hhO'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhO'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhO'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhO'\n", -128);
	printf("REAL = CHAR_MIN      '%hhO'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhO'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhO'\n", -129);


	ft_printf("FAKE = '%0.0u'\n", -42);
	printf("REAL = '%0.0u'\n", -42);
	ft_printf("FAKE = '%0u'\n", -42);
	printf("REAL = '%0u'\n", -42);
	ft_printf("FAKE = '%#u'\n", -42);
	printf("REAL = '%#u'\n", -42);
	ft_printf("FAKE = '%10u'\n", -42);
	printf("REAL = '%10u'\n", -42);
	ft_printf("FAKE = '%10.0u'\n", 0);
	printf("REAL = '%10.0u'\n", 0);
	ft_printf("FAKE = '%0u'\n", 0);
	printf("REAL = '%0u'\n", 0);
	ft_printf("FAKE = '%.0u'\n", 0);
	printf("REAL = '%.0u'\n", 0);
	ft_printf("FAKE = '%#.2u'\n", 0);
	printf("REAL = '%#.2u'\n", 0);
	ft_printf("FAKE = '%#20u'\n", 0);
	printf("REAL = '%#20u'\n", 0);
	ft_printf("FAKE = '%#-20u'\n", 55);
	printf("REAL = '%#-20u'\n", 55);
	ft_printf("FAKE = '%0u'\n", 55);
	printf("REAL = '%0u'\n", 55);
	ft_printf("FAKE = '%.0u'\n", 55);
	printf("REAL = '%.0u'\n", 55);
	ft_printf("FAKE = '%#.2u'\n", 55);
	printf("REAL = '%#.2u'\n", 55);
	ft_printf("FAKE = '%#20u'\n", 55);
	printf("REAL = '%#20u'\n", 55);
	ft_printf("FAKE = '%#-20u'\n", 55);
	printf("REAL = '%#-20u'\n", 55);
	ft_printf("FAKE = '%#-20u'u'\n", 55);
	printf("REAL = '%#-20u'u'\n", 55);
	ft_printf("FAKE = '%0.0u'\n", 0);
	printf("REAL = '%0.0u'\n", 0);
	ft_printf("FAKE = '%#.20u'\n", 0);
	printf("REAL = '%#.20u'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llu'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llu'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llu'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llu'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llu'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llu'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llu'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llu'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lu'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lu'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lu'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lu'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lu'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lu'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lu'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lu'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%u'\n", INT_MAX);
	printf("REAL = INT_MAX      '%u'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%u'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%u'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.u'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.u'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.u'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.u'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hu'\n", 32767);
	printf("REAL = SHORT_MAX      '%hu'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hu'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hu'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hu'\n", -32768);
	printf("REAL = SHORT_MIN      '%hu'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hu'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hu'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhu'\n", 127);
	printf("REAL = CHAR_MAX      '%hhu'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhu'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhu'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhu'\n", -128);
	printf("REAL = CHAR_MIN      '%hhu'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhu'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhu'\n", -129);


	ft_printf("FAKE = '%0.0U'\n", -42);
	printf("REAL = '%0.0U'\n", -42);
	ft_printf("FAKE = '%0U'\n", -42);
	printf("REAL = '%0U'\n", -42);
	ft_printf("FAKE = '%#U'\n", -42);
	printf("REAL = '%#U'\n", -42);
	ft_printf("FAKE = '%10U'\n", -42);
	printf("REAL = '%10U'\n", -42);
	ft_printf("FAKE = '%10.0U'\n", 0);
	printf("REAL = '%10.0U'\n", 0);
	ft_printf("FAKE = '%0U'\n", 0);
	printf("REAL = '%0U'\n", 0);
	ft_printf("FAKE = '%.0U'\n", 0);
	printf("REAL = '%.0U'\n", 0);
	ft_printf("FAKE = '%#.2U'\n", 0);
	printf("REAL = '%#.2U'\n", 0);
	ft_printf("FAKE = '%#20U'\n", 0);
	printf("REAL = '%#20U'\n", 0);
	ft_printf("FAKE = '%#-20U'\n", 55);
	printf("REAL = '%#-20U'\n", 55);
	ft_printf("FAKE = '%0U'\n", 55);
	printf("REAL = '%0U'\n", 55);
	ft_printf("FAKE = '%.0U'\n", 55);
	printf("REAL = '%.0U'\n", 55);
	ft_printf("FAKE = '%#.2U'\n", 55);
	printf("REAL = '%#.2U'\n", 55);
	ft_printf("FAKE = '%#20U'\n", 55);
	printf("REAL = '%#20U'\n", 55);
	ft_printf("FAKE = '%#-20U'\n", 55);
	printf("REAL = '%#-20U'\n", 55);
	ft_printf("FAKE = '%#-20U'U'\n", 55);
	printf("REAL = '%#-20U'U'\n", 55);
	ft_printf("FAKE = '%0.0U'\n", 0);
	printf("REAL = '%0.0U'\n", 0);
	ft_printf("FAKE = '%#.20U'\n", 0);
	printf("REAL = '%#.20U'\n", 0);
	ft_printf("FAKE = LONG_MAX      '%llU'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%llU'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%llU'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%llU'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.llU'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.llU'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.llU'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.llU'\n", LONG_MIN - 1);
	ft_printf("FAKE = LONG_MAX      '%lU'\n", LONG_MAX);
	printf("REAL = LONG_MAX      '%lU'\n", LONG_MAX);
	ft_printf("FAKE = LONG_MAX + 1  '%lU'\n", LONG_MAX + 1);
	printf("REAL = LONG_MAX + 1  '%lU'\n", LONG_MAX + 1);
	ft_printf("FAKE = LONG_MIN      '%.lU'\n", LONG_MIN);
	printf("REAL = LONG_MIN      '%.lU'\n", LONG_MIN);
	ft_printf("FAKE = LONG_MIN - 1  '%.lU'\n", LONG_MIN - 1);
	printf("REAL = LONG_MIN - 1  '%.lU'\n", LONG_MIN - 1);
	ft_printf("FAKE = INT_MAX      '%U'\n", INT_MAX);
	printf("REAL = INT_MAX      '%U'\n", INT_MAX);
	ft_printf("FAKE = INT_MAX + 1  '%U'\n", INT_MAX + 1);
	printf("REAL = INT_MAX + 1  '%U'\n", INT_MAX + 1);
	ft_printf("FAKE = INT_MIN      '%.U'\n", INT_MIN);
	printf("REAL = INT_MIN      '%.U'\n", INT_MIN);
	ft_printf("FAKE = INT_MIN - 1  '%.U'\n", INT_MIN - 1);
	printf("REAL = INT_MIN - 1  '%.U'\n", INT_MIN - 1);
	ft_printf("FAKE = SHORT_MAX      '%hU'\n", 32767);
	printf("REAL = SHORT_MAX      '%hU'\n", 32767);
	ft_printf("FAKE = SHORT_MAX + 1  '%hU'\n", 32768);
	printf("REAL = SHORT_MAX + 1  '%hU'\n", 32768);
	ft_printf("FAKE = SHORT_MIN      '%hU'\n", -32768);
	printf("REAL = SHORT_MIN      '%hU'\n", -32768);
	ft_printf("FAKE = SHORT_MIN - 1  '%hU'\n", -32769);
	printf("REAL = SHORT_MIN - 1  '%hU'\n", -32769);
	ft_printf("FAKE = CHAR_MAX      '%hhU'\n", 127);
	printf("REAL = CHAR_MAX      '%hhU'\n", 127);
	ft_printf("FAKE = CHAR_MAX + 1  '%hhU'\n", 128);
	printf("REAL = CHAR_MAX + 1  '%hhU'\n", 128);
	ft_printf("FAKE = CHAR_MIN      '%hhU'\n", -128);
	printf("REAL = CHAR_MIN      '%hhU'\n", -128);
	ft_printf("FAKE = CHAR_MIN - 1  '%hhU'\n", -129);
	printf("REAL = CHAR_MIN - 1  '%hhU'\n", -129);


	 ft_printf("FAKE = '%0.0s'\n", "abourgay");
	 printf("REAL = '%0.0s'\n", "abourgay");
	 ft_printf("FAKE = '%0s'\n", "abourgay");
	 printf("REAL = '%0s'\n", "abourgay");
	 ft_printf("FAKE = '%#s'\n", "abourgay");
	 printf("REAL = '%#s'\n", "abourgay");
	 ft_printf("FAKE = '%10s'\n", "abourgay");
	 printf("REAL = '%10s'\n", "abourgay");
	 ft_printf("FAKE = '%10.0s'\n","abourgay");
	 printf("REAL = '%10.0s'\n","abourgay");
	 ft_printf("FAKE = '%0s'\n","abourgay");
	 printf("REAL = '%0s'\n","abourgay");
	 ft_printf("FAKE = '%.0s'\n","abourgay");
	 printf("REAL = '%.0s'\n","abourgay");
	 ft_printf("FAKE = '%#.2s'\n","abourgay");
	 printf("REAL = '%#.2s'\n","abourgay");
	 ft_printf("FAKE = '%#20s'\n","abourgay");
	 printf("REAL = '%#20s'\n","abourgay");
	 ft_printf("FAKE = '%#-20s'\n", "abourgay");
	 printf("REAL = '%#-20s'\n", "abourgay");
	 ft_printf("FAKE = '%0s'\n", "abourgay");
	 printf("REAL = '%0s'\n", "abourgay");
	 ft_printf("FAKE = '%.0s'\n", "abourgay");
	 printf("REAL = '%.0s'\n", "abourgay");
	 ft_printf("FAKE = '%#.2s'\n", "abourgay");
	 printf("REAL = '%#.2s'\n", "abourgay");
	 ft_printf("FAKE = '%#20s'\n", "abourgay");
	 printf("REAL = '%#20s'\n", "abourgay");
	 ft_printf("FAKE = '%#-20s'\n", "abourgay");
	 printf("REAL = '%#-20s'\n", "abourgay");
	 ft_printf("FAKE = '%#-20s's'\n", "abourgay");
	 printf("REAL = '%#-20s's'\n", "abourgay");
	 ft_printf("FAKE = '%0.0s'\n","abourgay");
	 printf("REAL = '%0.0s'\n","abourgay");
	 ft_printf("FAKE = '%#.20s'\n","abourgay");
	 printf("REAL = '%#.20s'\n","abourgay");*/
	return (0);
}
