// Java_java_lang_ProcessHandleImpl_parent0
// rva 0x132b49c0  size 281  section .text  group text
// window base 0x1932b49c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessHandleImpl_parent0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // r14d
  __int64 isAlive0; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v22; // [rsp+0h] [rbp-188h] BYREF
  int v23; // [rsp+8h] [rbp-180h]
  int v24; // [rsp+10h] [rbp-178h]
  _DWORD v25[76]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v26; // [rsp+150h] [rbp-38h]

  v7 = a5;
  isAlive0 = Java_java_lang_ProcessHandleImpl_isAlive0(a1, a2: a4, a3, a4, a5, a6, a7: v22, a8: v23, a9: v24);
  if ( isAlive0 == a6 || isAlive0 == 0 || a6 == 0 )
  {
    v15 = sub_1932CA149(a1: v11, a2: v12, a3: 0, a4: 2);
    if ( v15 == -1 )
    {
      JNU_ThrowByName(a1: -1, a2: v16, a3: 544016, a4: v16, a5: 544072);
    }
    else
    {
      v25[0] = 304;
      if ( (unsigned int)sub_1932CA14F(a1: v15, a2: v16, a3: v25, a4: v15) != 0 )
      {
        while ( v7 != v25[2] )
        {
          if ( (unsigned int)sub_1932CA155(a1: v17, a2: v18, a3: v25, a4: v17) == 0 )
            goto LABEL_12;
        }
        Java_java_lang_ProcessHandleImpl_isAlive0(
          a1: v17,
          a2: v18,
          a3,
          a4: v18,
          a5: v25[8],
          a6: v19,
          a7: v22,
          a8: v23,
          a9: v24);
      }
      else
      {
        JNU_ThrowByName(a1: v17, a2: v18, a3: 544016, a4: v18, a5: 544072);
      }
LABEL_12:
      __imp_KERNEL32.dll!CloseHandle(a1: v17, a2: v18, a3: v20, a4: v17);
    }
  }
  return sub_132C8DE0(a1: v11, a2: v12, a3: v10, a4: (unsigned __int64)&v22 ^ v26, a5: v13, a6: v14);
}
