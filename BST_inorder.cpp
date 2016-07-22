#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>

using namespace std;

struct node
{
  int data;
  node *left;
  node *right;
};

struct node* newNode(int data)
{
  struct node* test = new node;
  test->data = data;
  test->left = NULL;
  test->right = NULL;
 
  return(test);
}
 
int search(int arr[], int strt, int end, int value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
} 

struct node* buildTree(int in[], int pre[], int inStrt, int inEnd)
{
  static int preIndex = 0;
  if(inStrt > inEnd)
     return NULL;
  struct node *tNode = newNode(pre[preIndex++]);
  if(inStrt == inEnd)
    return tNode;
  int inIndex = search(in, inStrt, inEnd, tNode->data);
  tNode->left = buildTree(in, pre, inStrt, inIndex-1);
  tNode->right = buildTree(in, pre, inIndex+1, inEnd);
 
  return tNode;
}
 
 
void printInorder(node* node)
{
  if (node == NULL)
     return;
  printInorder(node->left);
  cout<<node->data<<" ";
  printInorder(node->right);
}

int getLevelUtil(struct node *node, int data, int level)
{
    if (node == NULL)
        return 0;
 
    if (node->data == data)
        return level;
 
    int downlevel = getLevelUtil(node->left, data, level+1);
    if (downlevel != 0)
        return downlevel;
 
    downlevel = getLevelUtil(node->right, data, level+1);
    return downlevel;
}
 
int getDepth(struct node *node, int data)
{
    return getLevelUtil(node,data,1);
}


void printT(node *root, int in[], int n){
  int X[20]={0};
  int Y[20]={0};
  for(int i=0;i<=n;i++){
    X[in[i]]=i+1;
    Y[in[i]]=getDepth(root,in[i]);
  }
   int test[20][20];
   for(int i=0;i<20;i++)for(int j=0;j<20;j++)test[i][j]=0;
   for(int i=0;i<=n;i++)
   {
     test[X[in[i]]][Y[in[i]]]=in[i];
   }
   for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
       if(test[j][i]==0)cout<<"   ";
       else     printf("%03d ",test[j][i]);
     }
     cout<<endl;
   }
}

int main()
{
  int pre[] = {7,10,4,3,1,2,8,11};
  int in[] = {4,10,3,1,7,11,8,2};
  int len = sizeof(in)/sizeof(in[0]);
  node *root = buildTree(in, pre, 0 , len - 1);

  cout<<"\n Given inorder traversal is \n";
  for(int i=0;i<len;i++)cout<<in[i]<<" ";
  cout<<"\n Inorder traversal of the constructed tree is \n";
  printInorder(root);
  cout<<endl;
  printT(root,in,len-1);
  return 0;
}