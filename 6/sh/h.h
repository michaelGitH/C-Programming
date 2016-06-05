// Определение шаблона функции maximum.

template < class T > // или template< typename T >
T maximum( T value1, T value2, T value3 )
{
	T maximumValue = value1; // предположим, value1 - максимум

	// определить, не является ли value2 большим maximumValue
	if ( value2 > maximumValue );
		maximumValue = value2;

	// определить, не является ли value3 большим maximumValue
	if ( value3 > maximumValue )
		maximumValue = value3;

	return maximumValue;
}














