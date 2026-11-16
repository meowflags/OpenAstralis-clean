// sub_15AC580
// rva 0x015ac580  size 566  section .text  group text
// window base 0x1815ac580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AC580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h]
  unsigned int v22; // [rsp+1Ch] [rbp-2Ch]
  __int64 v23; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]
  unsigned int v26; // [rsp+3Ch] [rbp-Ch]
  unsigned int v27; // [rsp+40h] [rbp-8h]
  unsigned int v28; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v6 + 8) )
  {
    v25 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v5 )
  {
    v25 = a3;
    v7 = sub_4F66F40(a1, a2, a3, a4, a5: 1);
    if ( v7 == v5 )
    {
LABEL_30:
      sub_2771080();
LABEL_31:
      v23 = v4;
      sub_2771080();
LABEL_32:
      sub_2771080();
      goto LABEL_33;
    }
    v24 = v7;
    v9 = *(unsigned int *)(v7 + 8);
    v28 = v9;
    if ( (_DWORD)v9 == 0 )
    {
      result = 0;
LABEL_23:
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280();
      return result;
    }
    v10 = *(unsigned int *)(v7 + 12);
    v4 = v5 + 8 * v10;
    if ( (_DWORD)v10 == 0 )
      goto LABEL_31;
    v11 = (unsigned int)*(__int16 *)(v5 + 8 * v10 + 66);
    if ( (*(_WORD *)(v5 + 8 * v10 + 66) & 0x10) != 0 )
    {
      v27 = *(__int16 *)(v5 + 8 * v10 + 66);
      v22 = v10;
      v23 = v5 + 8 * v10;
      sub_15AC580(a1: v8, a2: v11, a3: v23);
      v11 = v27;
    }
    else
    {
      v23 = v5 + 8 * v10;
      v22 = v10;
    }
    if ( (v11 & 0x20) == 0 )
    {
LABEL_12:
      result = 1;
      while ( 1 )
      {
        v15 = v28;
        if ( (int)v28 <= (int)result )
          goto LABEL_23;
        if ( v28 <= (unsigned int)result )
          goto LABEL_34;
        v16 = *(unsigned int *)(v24 + 4 * result + 12);
        v11 = v5 + 8 * v16;
        if ( (_DWORD)v16 == 0 )
          goto LABEL_35;
        v8 = (unsigned int)*(__int16 *)(v5 + 8 * v16 + 66);
        if ( (*(_WORD *)(v5 + 8 * v16 + 66) & 0x10) != 0 )
        {
          v26 = *(__int16 *)(v5 + 8 * v16 + 66);
          v22 = v16;
          v27 = result;
          v21 = v5 + 8 * v16;
          sub_15AC580(a1: v8, a2: v11, a3: v21);
          v8 = v26;
        }
        else
        {
          v21 = v5 + 8 * v16;
          v22 = v16;
          v27 = result;
        }
        result = v27 + 1;
        if ( (v8 & 0x20) != 0 )
        {
          v17 = *(unsigned int *)(v5 + 8LL * v22 + 28);
          if ( (_DWORD)v17 == 0 )
            goto LABEL_36;
          v18 = *(unsigned int *)(v5 + 8 * v17 + 44);
          v19 = v5 + 8 * v18;
          if ( (_DWORD)v18 == 0 )
            goto LABEL_37;
          v26 = v27 + 1;
          v23 = v5 + 8 * v18;
          sub_15AD080(a1: v8, a2: v11, a3: v23, a4: v19, a5: v21, a6: 1);
          result = v26;
        }
      }
    }
    v12 = *(unsigned int *)(v5 + 8LL * v22 + 28);
    if ( (_DWORD)v12 == 0 )
      goto LABEL_32;
    v13 = *(unsigned int *)(v5 + 8 * v12 + 44);
    if ( (_DWORD)v13 != 0 )
    {
      v21 = v5 + 8 * v13;
      sub_15AD080(a1: v8, a2: v11, a3: v21, a4: v9, a5: v23, a6: 1);
      goto LABEL_12;
    }
LABEL_33:
    LODWORD(result) = sub_2771080();
LABEL_34:
    v27 = result;
    LODWORD(result) = sub_2771220(a1: v8, a2: v11, a3: (unsigned int)result, a4: v15, a5: v28);
LABEL_35:
    v21 = v11;
    v27 = result;
    sub_2771080();
LABEL_36:
    sub_2771080();
LABEL_37:
    sub_2771080(a1: v8, a2: v21, a3: v28, a4: v19);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15AC7C0();
  }
  sub_2771080();
  goto LABEL_30;
}
