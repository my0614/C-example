int f(int k)
{
	int i,result=0;
	for(i=0;i<=n;i++)
	{
		if(d[i] == k)
		{
			result = i;
			break;
		}
		else
		{
			result = -1;
		}
	
	}
	return result;
	
	

}
