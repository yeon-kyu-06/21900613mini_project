#include"product.h"
#include<string.h>
void addProduct(Product *p){
	printf("이름은?");
	getchar();
	fgets(p->name,sizeof(p->name),stdin);
	printf("중량은?(g)");
	scanf("%d",&p->weight);
	printf("가격은(원)?");
	scanf("%d",&p->price);
	p->stdPrice=p->price/p->weight;
	printf("별점은?");
	scanf("%d",&p->star);
}

void readProduct(Product p){
	printf("%d   %d    %d        %d   %s",p.weight,p.price,p.stdPrice,p.star,p.name);
}

void updateProduct(Product *p){
	printf("새 이름은?");
	getchar();
	fgets(p->name,sizeof(p->name),stdin);
	printf("새 중량은?(g)");
	scanf("%d",&p->weight);
	printf("새 가격은(원)?");
	scanf("%d",&p->price);
	p->stdPrice=p->price/p->weight;
	printf("새 별점은?");
	scanf("%d",&p->star);
	printf("=>수정성공!\n");
}

void deleteProduct(Product *p){
	p->price=-1;
	printf("=> 삭제됨!\n");
}

int selectMenu(){
	int menu;
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는?");
	scanf("%d",&menu);
	return menu;
}

