all:
	g++ Account/account.cc Account/account_test.cc -lgtest -lgtest_main -lpthread
	.\/a.out
