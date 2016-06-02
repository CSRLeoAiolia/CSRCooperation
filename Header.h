//
//  Header.h
// 优秀的宏定义 收集

/**
 *  此工程使用arc环境，如果不是，报警告
 */
#if ! __has_feature(objc_arc)
#warning This file must be compiled with ARC. Use -fobjc-arc flag (or convert project to ARC).
#endif

/**
 *  如果你维护一个可重用的库，并且不想切换到ARC，你可以使用预处理指令，在必要时保持与ARC的兼容-leoAiolia
 */
#if __has_feature(objc_arc)
//do your ARC thing here
#endif

/**
 *  如果你还想支持老的GCC compiler（GCC是由GNU之父Stallman所开发的linux下的编译器，全称为GNU Compiler Collection， 目前可以编译的语言包括：C, C++, Objective-C, Fortran, Java, and Ada,）
 */
#if defined(__has_feature) && __has_feature(objc_arc)
//do your ARC thing here
#endif













//不要乱写哦，找点真实的，以后可以直接拿来用


