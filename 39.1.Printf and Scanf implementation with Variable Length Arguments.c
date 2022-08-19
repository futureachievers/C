
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int print (char * str, ...)
{
	va_list vl;
	int i = 0, j=0;
		char buff[100]={0}, tmp[20];
		va_start( vl, str ); 
		while (str && str[i])
		{
		  	if(str[i] == '%')
		  	{
 		    i++;
 		    switch (str[i]) 
 		    {
	 		    case 'c': 
	 		    {
	 		        buff[j] = (char)va_arg( vl, int );
	 		        j++;
	 		        break;
	 		    }
	 		    case 'd': 
	 		    {
	 		        sprintf(tmp,"%d",va_arg( vl, int ));    
	 		        strcpy(&buff[j], tmp);
	 		        j += strlen(tmp);
		           break;
		        }
		        case 'x': 
		        {
		           sprintf(tmp,"%x",va_arg( vl, int )); 
		           strcpy(&buff[j], tmp);
		           j += strlen(tmp);
		           break;
		        }
        	}
     	} 
     	else 
	    {
	       	buff[j] =str[i];
	       	j++;
	    }
	    i++;
	} 
    fwrite(buff, j, 1, stdout); 
    va_end(vl);
    return j;
 }
 

int scan (char * str, ...)
{
    va_list vl;
    int i = 0, j=0, ret = 0;
    char buff[100] = {0}, tmp[20], c='\0';
    char *out_loc;
    while(c != '\n') 
    {
        if (fread(&c, 1, 1, stdin)) 
        {
 	       buff[i] = c;
 	       i++;
 	    }
 	}
    printf("buffer = %s str = %s",buff, str );
 	va_start( vl, str );
 	i = 0;
 	while (str && str[i])
 	{
 	    if (str[i] == '%') 
 	    {
 	       i++;
 	       switch (str[i]) 
 	       {
 	           case 'c': 
 	           {
	 	           *(char *)va_arg( vl, char* ) = buff[j];
	 	           j++;
	 	           ret ++;
	 	           break;
 	           }
 	           case 'd': 
 	           {
	 	           *(int *)va_arg( vl, int* ) =strtol(&buff[j], &out_loc, 10);
	 	           j+=out_loc -&buff[j];
	 	           ret++;
	 	           break;
 	            }
 	            case 'x': 
 	            {
	 	           *(int *)va_arg( vl, int* ) =strtol(&buff[j], &out_loc, 16);
	 	           j+=out_loc -&buff[j];
	 	           ret++;
	 	           break;
 	            }
 	        }
 	    } 
 	    else 
 	    {
 	        buff[j] =str[i];
            j++;
        }
        i++;
    }
    printf("buffer = %s str = %s",buff, str );
    va_end(vl);
    return ret;
}
int main(int argc, char *argv[])
{
	char c;
	int i;
	int h;
	int ret = 0;
	ret = scan("%c %d p %x", &c, &i, &h);
	print("C = %c, I = %d, H =%x, Return %d", c, i, h, ret);
	return 0;
}



