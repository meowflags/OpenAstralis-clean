// sub_132AD2D4
// rva 0x132ad2d4  size 166  section .text  group text
// window base 0x1932ad2d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AD2D4(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  unsigned __int16 v7; // bx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // edi
  int v15; // esi
  int v16; // r9d
  int v17; // r8d
  unsigned int v19; // ebx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi

  v6 = -(int)ipv6_available(a1: a4, a2: a3);
  v7 = v6 == 0 ? 2 : 0;
  v10 = __imp_IPHLPAPI.DLL!GetUnicastIpAddressTable(a1: v8, a2: v9, a3: v9, a4: v6 == 0 ? 2 : 0);
  if ( v10 != 0 )
  {
    __imp_KERNEL32.dll!SetLastError(a1: v12, a2: v13, a3: v11, a4: v10);
    v17 = 538080;
LABEL_3:
    sub_1932AED04(a1: v14, a2: v15, a3: 534024, a4: v14, a5: v17, a6: v16);
    return 0;
  }
  v19 = __imp_IPHLPAPI.DLL!GetAnycastIpAddressTable(a1: v12, a2: v13, a3: a5, a4: v7);
  if ( v19 != 0 )
  {
    __imp_IPHLPAPI.DLL!FreeMibTable(a1: v20);
    __imp_KERNEL32.dll!SetLastError(a1: v22, a2: v23, a3: v21, a4: v19);
    v17 = 538112;
    goto LABEL_3;
  }
  return 1;
}
