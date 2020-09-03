

int f(int num)
{
	int i,cnt=0;
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			cnt++;
		}
	}
	return cnt;
}


