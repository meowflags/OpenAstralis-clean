// sub_132B1FC0
// rva 0x132b1fc0  size 261  section .text  group text
// window base 0x1932b1fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B1FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  _BYTE *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rsi
  _BYTE *v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-458h] BYREF
  _BYTE v20[1024]; // [rsp+20h] [rbp-438h] BYREF
  __int64 v21; // [rsp+420h] [rbp-38h]

  v5 = a5;
  sub_1932CA161(a1, a2, a3: 0, a4: v20, a5: 1024);
  v15 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: v8, a2: v9, a3: 1, a4) >= 0 )
  {
    v16 = v5;
    if ( (int)v5 <= 512 )
    {
      v17 = v20;
    }
    else
    {
      v17 = (_BYTE *)__imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v11, a2: v5, a3: v10, a4: 2 * v5);
      if ( v17 == nullptr )
      {
        JNU_ThrowByName(a1: 0, a2: v16, a3: 538568, a4, a5: 0);
        return sub_132C8DE0(a1: v11, a2: v12, a3: v10, a4: (unsigned __int64)&v19 ^ v21, a5: v13, a6: v14);
      }
    }
    if ( v16 > 0 )
    {
      do
      {
        *(_WORD *)&v17[2 * v15] = *(unsigned __int8 *)(a3 + v15);
        ++v15;
      }
      while ( v15 < v16 );
    }
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)a4 + 1304LL))(
      a1: v17,
      a2: v16,
      a3: v17,
      a4,
      a5: (unsigned int)v5);
    if ( v11 != v20 )
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v11, a2: v12, a3: v10, a4: v11);
  }
  return sub_132C8DE0(a1: v11, a2: v12, a3: v10, a4: (unsigned __int64)&v19 ^ v21, a5: v13, a6: v14);
}
