// sub_132B7FF0
// rva 0x132b7ff0  size 138  section .text  group text
// window base 0x1932b7ff0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B7FF0(_DWORD a1, int a2, _DWORD a3, int a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  int v14; // [rsp+0h] [rbp-138h] BYREF
  int v15; // [rsp+8h] [rbp-130h]
  __int64 v16; // [rsp+10h] [rbp-128h]
  __int64 v17; // [rsp+18h] [rbp-120h]
  _BYTE v18[256]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v19; // [rsp+120h] [rbp-18h]

  v6 = sub_132B826C(a1: a4, a2, a3: 256, a4: (unsigned int)v18, a5, a6, a7: v14, a8: v15, a9: v16, a10: v17);
  if ( v6 != 0 )
  {
    if ( v6 == 3 )
    {
      __imp_api-ms-win-crt-string-l1-1-0.dll!_strdup(a1: v8, a2: v9, a3: v7, a4: v18);
    }
    else if ( sub_132B8750(
                a1: v8,
                a2: v9,
                a3: (unsigned int)v18,
                a4: v8,
                a5: v10,
                a6: v11,
                a7: v14,
                a8: v15,
                a9: v16,
                a10: v17) == 0 )
    {
      sub_132B807C(a1: v8, a2: v9, a3: v7, a4: v12, a5: v10, a6: v11);
    }
  }
  return sub_132C8DE0(a1: v8, a2: v9, a3: v7, a4: (unsigned __int64)&v14 ^ v19, a5: v10, a6: v11);
}
