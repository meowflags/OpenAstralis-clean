// sub_4F252C0
// rva 0x04f252c0  size 934  section .text  group text
// window base 0x184f252c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F252C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 i; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 j; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r9d
  __int64 v23; // rax
  __int16 v24; // dx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int16 v27; // dx
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+10h] [rbp-28h]
  __int64 v35; // [rsp+18h] [rbp-20h]
  __int64 v36; // [rsp+20h] [rbp-18h]
  unsigned int v37; // [rsp+28h] [rbp-10h]
  unsigned int v38; // [rsp+2Ch] [rbp-Ch]
  unsigned int v39; // [rsp+30h] [rbp-8h]
  unsigned int v40; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v8 + 8) )
  {
    v35 = a5;
    v36 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v9 == 0 )
    {
LABEL_39:
      v35 = a5;
      v36 = a3;
      sub_2771080();
      goto LABEL_40;
    }
    v10 = *(_DWORD *)(v7 + 8 * v9 + 8) >> *(_BYTE *)(a5 + 12);
    v40 = v10;
    v11 = 2 * v10;
    v39 = 2 * v10;
    if ( (v10 & 0x40000000) != 0 )
    {
LABEL_40:
      v35 = a5;
      v36 = a3;
      sub_2770E80(a1, a2, a3: v39);
      goto LABEL_41;
    }
    v5 = *(_QWORD *)(v8 + 40);
    v12 = *(_QWORD *)(v8 + 32);
    v13 = (v11 + 19LL) & 0x1FFFFFFF8LL;
    if ( v13 >= 0x20000 || v5 + v13 > v12 )
    {
      v35 = a5;
      v36 = a3;
      v34 = sub_1EAA840(a1: v12, a2: v13, a3: 34082368, a4: 34082368, a5: v39);
      v10 = v40;
      a5 = v35;
      a3 = v36;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v5 + v13;
      *(_QWORD *)v5 = 34082368;
      *(_DWORD *)(v5 + 8) = v11;
      *(_DWORD *)(v5 + 12) = 0;
      if ( v13 - 16 >= 0x800 )
      {
        v35 = a5;
        v36 = a3;
        memset((void *)(v5 + 16), 0, v13 - 16);
      }
      else
      {
        for ( i = 16; v13 > i; i += 8LL )
          *(_QWORD *)(v5 + i) = 0;
      }
      v34 = v5;
    }
    v6 = *(_QWORD *)(v8 + 40);
    v15 = *(_QWORD *)(v8 + 32);
    v16 = (2LL * v10 + 19) & 0x3FFFFFFF8LL;
    if ( v16 >= 0x20000 || v6 + v16 > v15 )
    {
      v35 = a5;
      v36 = a3;
      v6 = sub_1EAA840(a1: v15, a2: v16, a3: 34089376, a4: 34089376, a5: v40);
      a5 = v35;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v6 + v16;
      *(_QWORD *)v6 = 34089376;
      *(_DWORD *)(v6 + 8) = v10;
      *(_DWORD *)(v6 + 12) = 0;
      v17 = v16 - 16;
      if ( v16 - 16 >= 0x800 )
      {
        v35 = a5;
        v36 = a3;
        memset((void *)(v6 + 16), 0, v17);
        v17 = 0;
      }
      else
      {
        for ( j = 16; v16 > j; j += 8LL )
          *(_QWORD *)(v6 + j) = 0;
      }
      v36 = a3;
    }
    v33 = v6;
    v35 = a5;
    sub_4FF3680(a1: v6, a2: 0, a3: a5, a4: v17, a5: 0);
    v22 = v40;
    if ( v40 == 0 )
    {
      v38 = 0;
      v37 = 0;
      v23 = v34;
      v25 = v39;
LABEL_29:
      result = sub_4F239A0(a1: v25, a2: v25, a3: v36, a4: v19, a5: v23, a6: 0);
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280(a1: v30, a2: v31, a3: v37, a4: v29, a5: v38);
      return result;
    }
    if ( (v40 & 0x7FFFFFFF) != 0 )
    {
      v6 = v33;
      v23 = v34;
      v24 = *(_WORD *)(v33 + 12);
      *(_BYTE *)(v34 + 12) = HIBYTE(v24);
      *(_BYTE *)(v23 + 13) = v24;
      v5 = 1;
      v19 = 2;
      v25 = v39;
      while ( v22 > (int)v5 )
      {
        v26 = (unsigned int)(v19 + 1);
        if ( v22 <= (unsigned int)v5 )
          goto LABEL_42;
        if ( (unsigned int)v25 <= (unsigned int)v19 )
          goto LABEL_43;
        v27 = *(_WORD *)(v6 + 2 * v5 + 12);
        *(_BYTE *)(v23 + v19 + 12) = HIBYTE(v27);
        v19 = (unsigned int)(v19 + 2);
        if ( (unsigned int)v25 <= (unsigned int)v26 )
          goto LABEL_44;
        *(_BYTE *)(v23 + v26 + 12) = v27;
        v5 = (unsigned int)(v5 + 1);
      }
      v38 = v19;
      v37 = v5;
      goto LABEL_29;
    }
LABEL_41:
    sub_2771220(a1: v20, a2: v21, a3: 0, a4: v19, a5: 0);
LABEL_42:
    sub_2771220(a1: v26, a2: v25, a3: (unsigned int)v5, a4: v19, a5: v40);
LABEL_43:
    sub_2771220(a1: v26, a2: v25, a3: (unsigned int)v19, a4: v19, a5: v39);
LABEL_44:
    sub_2771220(a1: v26, a2: v6, a3: (unsigned int)v26, a4: v19, a5: v39);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F25680();
  }
  v36 = a3;
  sub_2771080();
  goto LABEL_39;
}
