// sub_1ED82E0
// rva 0x01ed82e0  size 378  section .text  group text
// window base 0x181ed82e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED82E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // r9d
  __int64 v24; // rsi
  char v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-8h]

  v28 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    v27 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v25);
  }
  else if ( a3 != v6 )
  {
    v27 = a3;
    v8 = sub_4F636E0();
    if ( v28 == v6 )
    {
LABEL_25:
      sub_2771080();
LABEL_26:
      sub_2771080();
      goto LABEL_27;
    }
    v26 = v8;
    v11 = sub_4F636E0(a1: v9, a2: v10, a3: v28);
    if ( v26 != v11 )
    {
      result = 0;
      goto LABEL_6;
    }
    v26 = sub_4F67920(a1: v12, a2: v13, a3: v27);
    v17 = sub_4F67920(a1: v15, a2: v16, a3: v28);
    if ( v26 == v6 )
      goto LABEL_26;
    if ( v26 == v17 )
    {
      result = 1;
    }
    else if ( v17 == v6 )
    {
      result = 0;
    }
    else
    {
      if ( *(_BYTE *)(v26 + 12) == *(_BYTE *)(v17 + 12) )
      {
        v21 = *(unsigned int *)(v17 + 4);
        if ( (_DWORD)v21 != 0 )
        {
          v22 = *(unsigned int *)(v26 + 4);
          if ( (_DWORD)v22 != 0 )
          {
            v23 = *(_DWORD *)(v6 + 8 * v21 + 8);
            v24 = *(unsigned int *)(v6 + 8 * v22 + 8);
            if ( (_DWORD)v24 == v23 )
            {
              if ( v23 != 0 )
                result = sub_282F960(a1: 12, a2: v24, a3: v6 + 8 * v21, a4: v18, a5: 12, a6: v6 + 8 * v22);
              else
                result = 1;
            }
            else
            {
              result = 0;
            }
            goto LABEL_6;
          }
LABEL_28:
          sub_2771080(a1: v19, a2: v20, a3: v27, a4: v18, a5: v28);
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          return sub_1ED8460();
        }
LABEL_27:
        sub_2771080();
        goto LABEL_28;
      }
      result = 0;
    }
LABEL_6:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_25;
}
