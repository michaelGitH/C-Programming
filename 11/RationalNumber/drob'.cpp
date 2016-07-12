RationalNumber::RationalNumber( int n, int d )
	: numenator( n ),
	znam( setDenom( denominator ) );
{
	int devisor = ( numenator < denominator ) ? numenator : denominator;
	for( ; ( ( numenator % devisor != 0 ) || 
	( denominator % devisor != 0 ) ) && devisor > 1
		; devisor-- );
	numenator /= devisor;
	denominator /= devisor;
}

int RationalNumber::setDenom( int d ) {
	if( d > 0 ) {
		return d;
	}
	else {
		cerr << "Denominator incorrect! Abnormal termination!" << "\n";
		exit( 1 );
	}
}

RationalNumber RationalNumber operator+( const RationalNumber &right ) {
	int num1 = numenator, num2 = right.numenator,
	den1 = denominator, den2 = right.denominator;
	int devisor = ( denominator < right.denominator ) ? denominator : right.denominator;
	for( ; ( ( denominator % devisor != 0 ) 
		|| ( right.denominator % devisor != 0 ) )
		&& devisor > 1; devisor-- );
	if( devisor > 1 ) {
		if( denominator < right.denominator ){
			num1 *= devisor;
			den1 *= devisor;
		}
		else{
			num2 *= devisor;
			den2 *= devisor;
		}
	}
	else{
		num1 *= den2;
		num2 *= den1;
		den1 *= den2;
	}
	return temp( num1 + num2, den1 );	
}

RationalNumber RationalNumber operator+( const RationalNumber &right ) {
	int num1 = numenator, num2 = right.numenator,
	den1 = denominator, den2 = right.denominator;
	int devisor = ( denominator < right.denominator ) ? denominator : right.denominator;
	for( ; ( ( denominator % devisor != 0 ) 
		|| ( right.denominator % devisor != 0 ) )
		&& devisor > 1; devisor-- );
	if( devisor > 1 ) {
		if( denominator < right.denominator ){
			num1 *= devisor;
			den1 *= devisor;
		}
		else{
			num2 *= devisor;
			den2 *= devisor;
		}
	}
	else{
		num1 *= den2;
		num2 *= den1;
		den1 *= den2;
	}
	return temp( num1 - num2, den1 );	
}
