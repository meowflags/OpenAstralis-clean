// sub_132C9310
// rva 0x132c9310  size 112  section .text  group text
// window base 0x1932c9310: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9310(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        __int64 a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi

  a10 = v10;
  __imp_KERNEL32.dll!RtlCaptureContext();
  result = __imp_KERNEL32.dll!RtlLookupFunctionEntry(a1: *(_QWORD *)(a4 + 248), a2: v12, a3: &a7, a4: *(_QWORD *)(a4 + 248), a5: 0);
  if ( result != 0 )
    return __imp_KERNEL32.dll!RtlVirtualUnwind(a1: v14, a2: v15, a3: a7, a4: 0, a5: v14, a6: result);
  return result;
}
