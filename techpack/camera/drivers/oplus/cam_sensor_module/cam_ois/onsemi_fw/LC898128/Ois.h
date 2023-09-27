/**
*	@file
*	@brief	vªCu[							Ver 1.0.9.x
*/
/*============================================================================*/
#ifndef MEASUREMENT_LIBRARY_H_
#define MEASUREMENT_LIBRARY_H_


/*----------------------------------------------------------------------*/
/**
*	@brief	Mixing coefficientimlCalMixCoefÖjpÌüÍl
*/
struct tagMlMixingValue
{
	double	radianX;
	double	radianY;

	double	hx45x;
	double	hy45x;
	double	hy45y;
	double	hx45y;

	UINT_8	hxsx;
	UINT_8	hysx;

	INT_32	hx45xL;		//! for Fixed point
	INT_32	hy45xL;		//! for Fixed point
	INT_32	hy45yL;		//! for Fixed point
	INT_32	hx45yL;		//! for Fixed point
};
/**
*	@brief	Mixing coefficientimlCalMixCoefÖjpÌüÍl
*/
typedef	struct tagMlMixingValue		mlMixingValue;

/*----------------------------------------------------------------------*/
/**
*	@brief	Lineaity correctionimlCalLinearCorrÖjpÌüÍl
*/
struct tagMlLinearityValue
{
	INT_32	measurecount;	//! input parameter
	UINT_32	*dacX;			//! input parameter
	UINT_32	*dacY;			//! input parameter

	double	*positionX;
	double	*positionY;
	UINT_16	*thresholdX;
	UINT_16	*thresholdY;

	UINT_32	*coefAXL;		//! for Fixed point
	UINT_32	*coefBXL;		//! for Fixed point
	UINT_32	*coefAYL;		//! for Fixed point
	UINT_32	*coefBYL;		//! for Fixed point
};
/**
*	@brief	Linearity correctionimlCalLinearCorrÖjpÌüÍl
*/
typedef	struct tagMlLinearityValue		mlLinearityValue;

struct tagMlPoint
{
	double	X;
	double	Y;
};
/**
*	@brief	Linearity correctionimlCalLinearCorrÖjpÌüÍl
*/
typedef	struct tagMlPoint		mlPoint;


/*----------------------------------------------------------------------*/
/**
*	@brief	Cu[G[R[h
*/
enum tagErrorCode
{
	/**! G[³µÅ³íI¹ */
	ML_OK,

	/**! s«[ÖAÌG[ */
	ML_MEMORY_ERROR,
	/**! øwèÌG[ */
	ML_ARGUMENT_ERROR,
	/**! øÉNULLªwß³êÄ¢éG[ */
	ML_ARGUMENT_NULL_ERROR,

	/**! wè³êœfBNgª¶ÝµÈ¢G[ */
	ML_DIRECTORY_NOT_EXIST_ERROR,
	/**! æt@Cª¶ÝµÈ¢G[ */
	ML_FILE_NOT_EXIST_ERROR,
	/**! t@CIOG[ */
	ML_FILE_IO_ERROR,
	/**! ¢oÌ}[NªLè */
	ML_UNDETECTED_MARK_ERROR,
	/**! ¯¶ÊuðŠ·}[Nªœdoµœ */
	ML_MULTIPLEX_DETECTION_MARK_ERROR,
	/**! KvÈDLLª©Â©çÈ¢ÈÇÀssÂÈóÔ */
	ML_NOT_EXECUTABLE,

	/**! ¢ðÍÌæªLèG[ */
	ML_THERE_UNANALYZED_IMAGE_ERROR,

	/**! ãLÈOÌG[ */
	ML_ERROR,
};

/**
*	@brief	Cu[G[R[h
*/
typedef	enum tagErrorCode	mlErrorCode;

#endif /* #ifndef MEASUREMENT_LIBRARY_H_ */
