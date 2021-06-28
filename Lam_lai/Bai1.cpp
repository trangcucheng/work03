#include <stdio.h>
#include <stdlib.h>
typedef int datatype;

typedef struct Node {
	datatype item;
	Node* next;
}node;

typedef struct Tree {
	datatype data;
	Tree* left;
	Tree* right;
}tree;

//ham tim cay con nho nhat
tree* find_minimum(tree* T){
	if (T == NULL) return NULL;
	else {
		if (T->left != NULL) {
			return find_minimum(T->left);
		}
	}
	return T;
}

tree* Delete(tree* T, datatype value) {
	if (T == NULL) return NULL;
	else {
		if (value < T->data) {
			T->left = Delete(T->left, value);
		}
		else {
			if (value > T->data) {
				T->right = Delete(T->right, value);
			}
			else {
				if (T->left == NULL && T->right == NULL) {
					free(T);
					return NULL;
				}
				//1 child
				else {
					if (T->left == NULL || T->right == NULL) {
						tree* temp = new tree();
						if (T->left == NULL) {
							temp = T->right;
						}
						else {
							temp - T->left;
						}
						free(T);
						return temp;
					}

					//2 child
					else {
						tree* temp = find_minimum(T->right);//xoa node nho nhat cua cay con ben phai
						T->data = temp->data;
						T->right = Delete(T->right, temp->data); //cay con ben phai nhan gia tri tra ve sau khi da xoa
					}
				}
			}
		}
	}
	return T;
	}


/*
void Delete(tree** T, datatype value) {
	//tim vi tri co value
	    if ((*T) != NULL) return;
		if (value < (*T)->data) {
			Delete(&((*T)->left), value);
		}
		if (value > (*T)->data) {
			Delete(&((*T)->right), value);
		}
		//da tim thay
		else {
			//khong child
			if ((*T)->left == NULL && (*T)->right == NULL) {
				tree* temp = *T;
				*T = NULL;
				free(temp);
				return;
			}
			//1 child
			if ((*T)->right != NULL || (*T)->left != NULL) {
				if ((*T)->right != NULL) {
					tree* temp = (*T)->right;
					(*T)->data = temp->data;
					free(temp);
					return;
				}
				if ((*T)->left != NULL) {
					tree* temp = (*T)->left;
					(*T)->data = temp->data;
					free(temp);
					return;
				}
			}
			//2 child se tim gia tri be nhat cua cay con ben phai hoac tim gia tri lon nhat cua cay con ben trai
			//be nhat cua cay con ben phai
			if ((*T)->right != NULL) {
				tree* temp = find_minimum((*T)->right);
				(*T)->data = temp->data;
				Delete(&temp, temp->data);
			}


		}

}*/


/*void Deletenode(tree** T, datatype value) {
	if ((*T)->right != NULL) {
		tree* T1 = (tree*)malloc(sizeof(tree));
		T1 = (*T)->right;
		while ((T1->left) != NULL) {
			T1 = T1->left;
		}
		(*T)->data = T1->data;
		Deletenode(&T1);
		return;
	}
	if (((*T)->left) != NULL) {
		tree* T1 = (tree*)malloc(sizeof(tree));
		T1 = (*T)->left;
		while ((T1->right) != NULL) {
			T1 = T1->right;
		}
		(*T)->data = T1->data;
		Deletenode(&T1);
		return;
	}
	tree* temp = *T;
	*T = NULL;
	free(temp);
}
*/
//muon thay doi noi dung cua o dia chi
//khi o dia chi co noi dung khac, tuc la tree do da tro den mot vung nho khac
//vi muon thay doi noi dung o dia chi nen khai bao **tree
void Insert(tree** T, datatype value) {

	if ((*T) == NULL) {
		tree* T1 = (tree*)malloc(sizeof(tree));
		T1->left = NULL;
		T1->right = NULL;
		T1->data = value;
		*T = T1;
		return;
	}else {
	    if(value > (*T)->data) {
			Insert(&((*T)->right), value);
		}
		if(value < (*T)->data) {
		    Insert(&((*T)->left), value);
		}
		if (value == ((*T)->data)) {
			printf("So %d da ton tai",value);
		}
		return;
	}
}





void PreOrder(tree* root) {
	if (root != NULL) {
		printf("%d ", root->data);
		PreOrder(root->left);
		PreOrder(root->right);
	}
	return;
}

//Duyet Trung thu tu
void InOrder(tree* root) {
	if (root != NULL) {
		InOrder(root->left);
		printf("%d ", root->data);
		InOrder(root->right);
	}
}

//Duyet Hau thu tu
void PostOrder(tree* root) {
	if (root != NULL) {
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d ", root->data);
	}
}

void Search(tree* T, datatype value, bool *x) {
//	printf("\nIn: ");
//	PreOrder(T);
	if (T != NULL) {
		if ((T->data) == value) {
			printf("eee ");
			*x=true;
		}

		if (value < (T->data)){
			Search(T->left,value,x);
		}
		if (value > (T->data)) {
			Search(T->right, value,x);
		}
	}
	else{
        printf("jfjfhjgf");
	 *x=false;
	 }
}

bool Search(tree* T, datatype value) {
//	printf("\nIn: ");
//	PreOrder(T);
	if (T != NULL){
		if ((T->data) == value){
			printf("eee ");
			return true;
		}

		if (value < (T->data)){
			Search(T->left,value);
		}
		if (value > (T->data)) {
			Search(T->right, value);
		}
	}
	else{
        printf("\njfjfhjgf");
	    return false;
	 }
}
int main() {
	tree* T = NULL;

	Insert(&T, 7);
	Insert(&T, 3);
	Insert(&T, 2);
	Insert(&T, 9);
	Insert(&T, 4);
	Insert(&T, 6);
	Insert(&T, 10);
	Insert(&T, 8);
	printf("Duyet tien thu tu: ");
	PreOrder(T);
	printf("\nDuyet trung thu tu: ");
	InOrder(T);
	printf("\nDuyet hau thu tu: ");
	PostOrder(T);

	//T=Delete(T,7);

	 T=Delete(T,6);
    //  T=Delete(T,3);
    //T=Delete(T,2);
     //T=Delete(T,4);
    //  T=Delete(T,8);
    //T=Delete(T,9);
    // T=Delete(T,10);
	printf("Duyet tien thu tu: ");
	PreOrder(T);
	//kiem tra
     int a=6;
	  //bool *x;
  //Search(T,a,x);
	//if (*x==true) printf("\nCo so %d\n",a);
 //else printf("\nKhong co %d\n",a);


	if (Search(T,a)) printf("\nCo so %d\n",a);
    else  printf("\nKhong co %d\n",a);

	return 0;

}

