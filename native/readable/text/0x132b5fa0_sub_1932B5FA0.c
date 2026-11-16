// sub_132B5FA0
// rva 0x132b5fa0  size 221  section .text  group text
// window base 0x1932b5fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B5FA0(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // r15d
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi

  v6 = 0;
  v7 = a5;
  v8 = a3;
  if ( a6 == 0 )
    JUMPOUT(0x32650FFD5LL);
  if ( a5 != 0 )
    v10 = sub_1932CA1FD(a1: 0, a2: a5, a3, a4: a5) + 2;
  else
    v10 = 1;
  v11 = v10 + sub_1932CA1FD(a1: v6, a2: v7, a3, a4: 544520);
  if ( v11 <= 0x104 )
  {
    v15 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v13, a2: v14, a3: v12, a4: v11);
    v18 = v15;
    if ( v15 != 0 )
    {
      sub_1932CA27B(a1: v16, a2: v17, a3: 544520, a4: v15);
      if ( v20 != 0 )
      {
        sub_1932CA281(a1: v19, a2: v20, a3: 544552, a4: v18);
        sub_1932CA281(a1: v23, a2: v24, a3: v24, a4: v18);
      }
      v25 = sub_132C8820(a1: v19, a2: v20, a3: v18, a4: v8, a5: v21, a6: v22);
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v25, a2: v27, a3: v26, a4: v18);
    }
    else
    {
      JNU_ThrowOutOfMemoryError(a1: v16, a2: v17, a3: 0, a4);
    }
  }
  return v13;
}
