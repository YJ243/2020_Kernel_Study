/*
 * 커널을 매개로 'src'에서 'dst'로 len 바이트만큼 복사하는 무의미한 시스템 호출
 * Linux Kernel Development - written by Robert Love
 * pg144
 * silly_copy.c
 * created by inhoinno
 *
 * */

SYSCALL_DEFINE3(silly_copy, unsigned long * ,src,
		unsigned long *,
		dst,
		unsigned long len)
{
	unsigned long buf;

	/*copy data from src which is located in usr space to buf*/
	if(copy_from_user(&buf, src, len))
		return -EFAULT;

	/*copy data from buf to dst which is located in usr space*/
	if(copy_to_user(dst,&buf,len))
		return  -EFAULT;

	/*return amount of data */
	return len;
}
