struct Node {
    int data;
    struct Node *next;
};

struct Node *first = NULL ;
first = malloc( sizeof(struct Node) );
first->next = 0;    //null pointer
first->data = -1;
int Fibonacci(int n)
{
    if( n <= 1 )
        return n;

    int fa = 0, fb = 1, fn;
    for(int i = 0; i <= n; i++){
        fn = fa + fb;
        fa = fb;
        fb = fn;
    }
    return fi;
}

Node *createNode(void)
{
    Node *tmpNode;
    tmpNode = (Node *) malloc(sizeof(Node));
    if(tmpNode == NULL){
        printf("記憶體不足");
        exit(1);
    }
    return (tmpNode);
}

void insert(Node *first, Node x){
    Node tmp;
    MALLOC(tmp, sizeof(*tmp));
    tmp->data = 50;
    if(*first){
        tmp->link = x->link;
        x->link = tmp;
    }else{
        tmp->link = NULL;
        *first = tmp;
    }
}

Node *insertNode( Node *first, Node *theNode, int data)}{
    Node *newNode;
    newNode = createNode();
    newNode = data;
    newNode->link = NULL;
    if( theNode == NULL ){            //前端插入
        newNode->link = first;
        first = new;Node;
    }else{
        if(theNode->link == NULL)    //尾端插入
            theNode->link = newNode;
        else{                           //中間插入
            newNode->link = theNode->link;
            theNode->link = newNode;
        }
    }
    return (first);
}

Node findNode(Node *head, int data){
    Node *node;
    node = first;                   //由首節點開始搜尋
    while( node != NULL ){          //走訪串列
        if( node->data == data ) //若找到，則回傳
            return node;
        node = node->link;       //指向下一個節點
    }
    return node;
}

/* 計算指定節點之後的長度　*/
int length( Node theNode ){
    int nodeNum = 0;
    Node *nextNode = theNode->link;
    while(nextNode != NULL) {
        nodeNum ++;
        nextNode = nextNode->link;
    }
    return (nodeNum);
}

void *freeNode(Node *tmpNode){
    free(tmpNode);
}