#include <stdio.h>

int reverseDigits(int n){
    int temp, rev=0 ;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    return rev;
}

int digitcount(int num){
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    return count;
}

int isAdams(int num){
	if(num<0){
		return 0;
	}
    int rev_then_sq=reverseDigits(num)*reverseDigits(num);
    int sq_then_rev=reverseDigits(num*num);
    if (rev_then_sq==sq_then_rev){
        return 1;
    }else{
        return 0;
    }
}

int isArmstrong(int num){
	if(num<0){
		return 0;
	}
    int dup=num, sum=0, power;
    int dig;
    int no_of_dig=digitcount(num);
    while(num>0){
        dig=num%10;
        power=1;
        for(int i=0;i<no_of_dig;i++){
        power=power*dig;
        }
        sum += power;
        num=num/10;
    }
    if(dup==sum){
        return 1;
    }else{
        return 0;
    }
}

int isPrimePalindrome(int num)
{
    if (num<2){
        return 0;
    }
    for(int i=2; i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
        if(num==reverseDigits(num)){
            return 1;
        }else{
            return 0;
        }
}