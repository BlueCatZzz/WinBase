#pragma once
// 错误码定义规则
// 31-30	严重性
// 29		Microsoft/Our
// 28		保留
// 27-16	Facility代码
// 15-0		异常代码

namespace Error {

	/** 成功 */
	const int ERROR_SUCCESS = 0x20000000;
}