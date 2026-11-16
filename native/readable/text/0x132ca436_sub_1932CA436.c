// sub_132CA436
// rva 0x132ca436  size 176  section .text  group text
// window base 0x1932ca436: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA436(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = *(_QWORD *)(a3 + 64);
  if ( v4 != 0 )
    result = __imp_CRYPT32.dll!CertCloseStore(a1, a2, a3: 0, a4: v4);
  if ( *(_QWORD *)(a3 + 56) != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(**(_QWORD **)(a3 + 176) + 1360LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 192));
  if ( *(_QWORD *)(a3 + 72) != 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(**(_QWORD **)(a3 + 176) + 1328LL))(
               a1,
               a2,
               a3: *(_QWORD *)(a3 + 200));
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v6);
  v7 = *(_QWORD *)(a3 + 88);
  if ( v7 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v7);
  v8 = *(_QWORD *)(a3 + 96);
  if ( v8 != 0 )
    result = __imp_CRYPT32.dll!CertFreeCertificateContext(a1, a2, a3, a4: v8);
  if ( *(_DWORD *)(a3 + 48) != 0 )
  {
    v9 = *(_QWORD *)(a3 + 104);
    if ( v9 != 0 )
      return __imp_CRYPT32.dll!CertFreeCertificateContext(a1, a2, a3, a4: v9);
  }
  return result;
}
