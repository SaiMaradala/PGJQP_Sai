public class Matrix_M
{  
public static void main(String args[])
{  
int a[][]={{1,4,1},{4,6,8},{3,5,7}};    
int b[][]={{1,5,1},{2,2,2},{4,8,12}};    

System.out.println("Matrix is:");
int c[][]=new int[3][3];    
        
for(int i=0;i<3;i++)
{    
for(int j=0;j<3;j++)
{    
c[i][j]=0;      
for(int k=0;k<3;k++)      
{      
c[i][j]+=a[i][k]*b[k][j];      
}
System.out.print(c[i][j]+"  ");    
} 
System.out.println();    
}    
}}  