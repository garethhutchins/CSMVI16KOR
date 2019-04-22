cmake_minimum_required(VERSION 3.12.2)

project(CSMVI16KOR)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release"
    CACHE STRING "Configuration types" FORCE)

add_executable(CSMVI16KOR
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/ammintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/arm_neon.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/arm64_neon.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/arm64intr.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/armintr.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/CodeAnalysis/sourceannotations.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/concurrencysal.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/crtdefs.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/dirent.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/eh.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/emmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/excpt.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/immintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/intrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/intrin0.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/limits.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/mm3dnow.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/mmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/msclr/marshal.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/msclr/marshal_cppstd.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/nmmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/pmmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/sal.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/setjmp.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/setjmpex.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/smmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/stdarg.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/stdint.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/thr/xthrcommon.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/thr/xtimec.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/tmmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/use_ansi.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vadefs.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcclr.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcruntime.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcruntime_exception.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcruntime_new.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcruntime_new_debug.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcruntime_string.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/vcruntime_typeinfo.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/wmmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xatomic.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xatomic0.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xcall_once.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xerrc.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xfilesystem_abi.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xkeycheck.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xlocinfo.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xmmintrin.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xpolymorphic_allocator.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xstring_insert.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/xtgmath.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/ymath.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/yvals.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/yvals_core.h
  ../../../../../../../Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.16.27023/include/zmmintrin.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/apiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/apisetcconv.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/basetsd.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/bcrypt.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/cderr.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/driverspecs.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/guiddef.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/inaddr.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/kernelspecs.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/ktmtypes.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/minwindef.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/no_sal2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/poppack.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/pshpack1.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/pshpack2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/pshpack4.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/pshpack8.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpcasync.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpcdce.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpcdcep.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpcndr.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpcnterr.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/rpcsal.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/sdkddkver.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/sdv_driverspecs.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/specstrings.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/specstrings_strict.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/specstrings_undef.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/stralign.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/tvout.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/winapifamily.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/windef.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/winerror.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/winpackagefamily.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/winsmcrd.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/wnnc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/wtypes.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/shared/WTypesbase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_malloc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_math.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_math_defines.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_memcpy_s.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_memory.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_search.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_share.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_stdio_config.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_terminate.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wconio.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wctype.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wdirect.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wio.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wprocess.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wstdio.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wstdlib.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wstring.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/corecrt_wtime.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/crtdbg.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/ctype.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/errno.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/float.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/locale.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/malloc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/math.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/share.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/stddef.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/stdio.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/stdlib.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/string.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/sys/stat.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/sys/types.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/time.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/ucrt/wchar.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/apiquery2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/cguid.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/combaseapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/coml2api.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/commdlg.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/consoleapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/consoleapi2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/consoleapi3.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/datetimeapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/dde.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ddeml.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/debugapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/dlgs.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/dpapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/enclaveapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/errhandlingapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/fibersapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/fileapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/handleapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/heapapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ime_cmodes.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/imm.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/interlockedapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ioapiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/jobapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/jobapi2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/joystickapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/libloaderapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/lzexpand.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mciapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mcx.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/memoryapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/minwinbase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mmeapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mmiscapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mmiscapi2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mmsyscom.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/mmsystem.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/msxml.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/namedpipeapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/namespaceapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/nb30.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ncrypt.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/OAIdl.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/objbase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ObjIdl.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ObjIdlbase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/ole.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/Ole2.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/OleAuto.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/oleidl.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/playsoundapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/processenv.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/processthreadsapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/processtopologyapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/profileapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/PropIdl.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/PropIdlBase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/prsht.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/realtimeapiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/reason.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/rpcnsi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/rpcnsip.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/SCardErr.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/securityappcontainer.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/securitybaseapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/servprov.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/shellapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/stringapiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/synchapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/sysinfoapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/systemtopologyapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/threadpoolapiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/threadpoollegacyapiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/timeapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/timezoneapi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/Unknwn.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/Unknwnbase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/urlmon.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/utilapiset.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/verrsrc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/WinBase.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/wincon.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/wincontypes.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/wincrypt.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/Windows.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winefs.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/wingdi.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winioctl.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winnetwk.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/WinNls.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winnt.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winperf.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winreg.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winresrc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winscard.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winsock.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winspool.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winsvc.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/WinUser.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/winver.h
  ../../../../../../../Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um/wow64apiset.h
  Canny.cpp
  Canny.h
  ClassTest.cpp
  ClassTest.h
  EDistance.cpp
  EDistance.h
  FormMain.cpp
  freenect-playback-wrapper.cpp
  freenect-playback-wrapper.h
  LabelFolder.cpp
  LabelFolder.h
  opencv2/opencv.hpp
  Probability.h
  SVMTest.cpp
  SVMTest.h
  TestFolder.cpp
  TestFolder.h
  TrainEDist.cpp
  TrainEDist.h
  TrainFolder.cpp
  TrainFolder.h
  TrainSVM.cpp
  TrainSVM.h
  Unlabelled.cpp
  Unlabelled.h
)
# Preprocessor definitions
target_compile_definitions(CSMVI16KOR PRIVATE
  $<$<CONFIG:Debug>:_UNICODE;_DEBUG>
  $<$<CONFIG:Release>:_UNICODE;NDEBUG>
)

# Minimal rebuild
if (MSVC)
  target_compile_options(CSMVI16KOR PRIVATE
    "$<$<CONFIG:Debug>:/Gm->"
    "$<$<CONFIG:Release>:/Gm->"
  )
endif ()

# Precompiled header files
if (MSVC)
  target_compile_options(CSMVI16KOR PRIVATE
    ""
  )
endif ()

# Link libraries
set_property(TARGET CSMVI16KOR
  APPEND PROPERTY LINK_LIBRARIES
  "$<$<CONFIG:Debug>:>"
  "$<$<CONFIG:Release>:>"
)
