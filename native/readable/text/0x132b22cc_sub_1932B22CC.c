// sub_132B22CC
// rva 0x132b22cc  size 299  section .text  group text
// window base 0x1932b22cc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B22CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _BYTE *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rsi
  _BYTE *v18; // rdi
  __int16 v19; // cx
  __int64 v21; // [rsp+0h] [rbp-458h] BYREF
  _BYTE v22[1024]; // [rsp+20h] [rbp-438h] BYREF
  __int64 v23; // [rsp+420h] [rbp-38h]

  v6 = sub_1932CA1FD(a1, a2, a3, a4: a3);
  sub_1932CA161(a1: v7, a2: v8, a3: 0, a4: v22, a5: 1024);
  v16 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: v9, a2: v10, a3: 1, a4) >= 0 )
  {
    v17 = v6;
    if ( v6 <= 512 )
    {
      v18 = v22;
    }
    else
    {
      v18 = (_BYTE *)__imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v12, a2: v6, a3: v11, a4: 2LL * v6);
      if ( v18 == nullptr )
      {
        JNU_ThrowByName(a1: 0, a2: v17, a3: 538568, a4, a5: 0);
        return sub_132C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v21 ^ v23, a5: v14, a6: v15);
      }
    }
    if ( v6 > 0 )
    {
      do
      {
        if ( (unsigned __int8)(*(_BYTE *)(a3 + v16) + 0x80) > 0x1Fu )
          v19 = *(unsigned __int8 *)(a3 + v16);
        else
          v19 = *(_WORD *)(4LL * *(unsigned __int8 *)(a3 + v16) + 0x336610);
        *(_WORD *)&v18[2 * v16++] = v19;
      }
      while ( v16 < v17 );
    }
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)a4 + 1304LL))(
      a1: v18,
      a2: v17,
      a3: v18,
      a4,
      a5: (unsigned int)v6);
    if ( v12 != v22 )
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v12, a2: v13, a3: v11, a4: v12);
  }
  return sub_132C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v21 ^ v23, a5: v14, a6: v15);
}
