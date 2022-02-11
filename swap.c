void swap(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = * second;
	*second = tmp;
}