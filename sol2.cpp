/*
* 动态分配二维数据
*/
void malloc2D(int **&a)  
{  
    a = new int*[xDim];  
    for(int i=0;i<xDim;i++)       
        a[i] = new int[yDim];  
    assert(a!=NULL);  
}  
  
/*
* 二维数据的内存空间释放
*/
void free2D(int **a)  
{  
    for(int i=0;i<xDim;i++)
    	free(a[i]);  
}  

