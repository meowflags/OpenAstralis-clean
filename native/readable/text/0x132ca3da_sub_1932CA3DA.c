// sub_132CA3DA
// rva 0x132ca3da  size 92  section .text  group text
// window base 0x1932ca3da: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA3DA(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a3 + 200);
  if ( v4 != 0 )
    result = __imp_CRYPT32.dll!CertCloseStore(a1, a2, a3: 0, a4: v4);
  if ( *(_QWORD *)(a3 + 112) != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(**(_QWORD **)(a3 + 272) + 1360LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 280));
  v6 = *(_QWORD *)(a3 + 208);
  if ( v6 != 0 )
    return sub_1932C97D0(a1, a2, a3, a4: v6);
  return result;
}
