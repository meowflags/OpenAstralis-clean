// sub_1ED3B20
// rva 0x01ed3b20  size 348  section .text  group text
// window base 0x181ed3b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED3B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdx
  _DWORD *result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int16 v23; // dx
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // esi
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+10h] [rbp-28h]
  _DWORD *v32; // [rsp+18h] [rbp-20h]
  __int64 v33; // [rsp+20h] [rbp-18h]
  _DWORD *v34; // [rsp+28h] [rbp-10h]
  __int64 v35; // [rsp+30h] [rbp-8h]

  v35 = a3;
  v34 = (_DWORD *)a5;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v8 + 8) )
  {
    v33 = a6;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
    goto LABEL_23;
  }
  v33 = a6;
  v32 = v7 + 94165028;
  if ( (unsigned int)sub_1ED3860(a1, a2, a3: (__int64)(v7 + 94165028), a4, a5, a6) == 0 )
  {
    v31 = (__int64)v7;
    goto LABEL_5;
  }
  v13 = v35;
  if ( *(_DWORD *)(v35 + 12) == 0 )
  {
LABEL_23:
    sub_2771080(a1: v10, a2: v11, a3: v13, a4: v9, a5: v34);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_1ED3C80(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29, a7);
  }
  v31 = sub_AF110A0(a1: v10, a2: v11, a3: v7 + 94165118, a4: v9, a5: v33, a6: v7);
LABEL_5:
  if ( v34 == v7
    && (unsigned int)sub_1ED3860(a1: v10, a2: v11, a3: (__int64)v32, a4: v9, a5: (__int64)v34, a6: v12) != 0
    && (result = (_DWORD *)sub_1ED49C0(a1: v16, a2: v17, a3: v33, a4: v15, a5: v31)) != v7 )
  {
    v21 = *result >> 3;
    v22 = (unsigned int)v7[2 * v21 + 4];
    v23 = HIWORD(v7[2 * v21 + 15]);
    if ( v23 >= 3 )
      goto LABEL_15;
    do
    {
      if ( v23 >= 5 && v7[2 * v22 + 7] == 88010 )
      {
        if ( *(int *)(v8 + 16) <= 0 )
        {
          v32 = result;
          sub_277F280();
          return v32;
        }
        return result;
      }
      v32 = result;
      result = (_DWORD *)sub_28C1CA0(a1: v19, a2: v20, a3: v7 + 91594404, a4: v18, a5: result);
LABEL_15:
      ;
    }
    while ( v7[2 * v22 + 5] != 70135 );
    v32 = result;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v7;
  }
  else
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v34;
  }
}
