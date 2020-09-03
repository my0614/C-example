int f()
{
	int i,max;
	max=d[0];
	for(i=0;i<n;i++)
	{
		if(d[i] >max)
		{
			max = d[i];
		}	
	}

	for(i=0;i<=n;i++)
	{
		if(d[i] == max)
			return i+1;

			
	}
	
}

