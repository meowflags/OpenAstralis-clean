// sub_4F397E0
// rva 0x04f397e0  size 616  section .text  group text
// window base 0x184f397e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F397E0(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r10d
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]
  unsigned int *v27; // [rsp+10h] [rbp-28h]
  unsigned int v28; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v29; // [rsp+20h] [rbp-18h]
  unsigned int v30; // [rsp+24h] [rbp-14h]
  unsigned int v31; // [rsp+28h] [rbp-10h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  unsigned int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v27 = a3;
  v34 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    v31 = a5;
    v19 = sub_1EB84E0();
    goto LABEL_21;
  }
  v33 = *((char *)a3 + 12);
  v32 = a3[2];
  v31 = a5;
  sub_632A360(a1: v8 + 376643464, a2, a3: a5, a4: v32, a5: v32, a6: v32);
  v11 = (unsigned __int64)v27;
  v12 = v27[1];
  v13 = v8 + 8 * v12;
  v14 = v32 + 1;
  LODWORD(v6) = (char)(v33 | ((int)(255 - v34) < 0));
  v7 = v33;
  if ( v33 == (_DWORD)v6 )
  {
    v24 = (int)v14;
    v15 = v32 + 1;
    v14 = (unsigned int)v6;
    v17 = v24 << v6;
    if ( (_DWORD)v12 == 0 )
    {
LABEL_22:
      v30 = v6;
      sub_2771080(a1: v17, a2: v10, a3: v13, a4: v15, a5: v7, a6: v34);
      goto LABEL_23;
    }
    v18 = *(unsigned int *)(v8 + 8 * v12 + 8);
    if ( v17 <= v18 )
    {
      v30 = (char)(v33 | ((int)(255 - v34) < 0));
      v28 = v32 + 1;
      v6 = v13;
      v19 = v33;
      goto LABEL_6;
    }
    v29 = v33 | ((255 - v34) >> 31);
  }
  else
  {
    v29 = v33 | ((255 - v34) >> 31);
    v15 = v32 + 1;
  }
  v26 = v13;
  v28 = v15;
  v30 = (char)(v33 | ((int)(255 - v34) < 0));
  v16 = sub_4F38CC0(a1: v15, a2: (unsigned int)v6, a3: v13, a4: v14, a5: v33, a6: v32);
  v11 = (unsigned __int64)v27;
  v27[1] = (unsigned __int64)(v16 - v8) >> 3;
  v14 = *(unsigned int *)v11;
  if ( (v14 & 2) != 0 )
  {
    v18 = v11 & 0xFFFFFFFFFFF80000LL;
    v14 = (v11 - ((v11 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + v14 + 0x38) != 0 )
      *(_BYTE *)(v18 + v14 + 56) = 0;
  }
  *(_BYTE *)(v11 + 12) = v29;
  v6 = v16;
  v19 = v30;
LABEL_6:
  v29 = v19;
  v26 = v6;
  if ( v6 == v8 )
  {
LABEL_21:
    v27 = (unsigned int *)v11;
    v13 = sub_2771080(a1: v17, a2: v10, a3: v19, a4: v14, a5: v18, a6: v34);
    goto LABEL_22;
  }
  sub_1EB4960(a1: (v31 + 1) << v19, a2: (v32 - v31) << v19, a3: v6, a4: v19, a5: v31 << v19, a6: v6);
  if ( v29 != 0 )
  {
    sub_501CF00(a1: v21, a2: v22, a3: v31, a4: v20, a5: v26);
    *(_WORD *)(v26 + (int)(2 * v31) + 12) = v34;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v26 + 8) <= v31 )
  {
LABEL_23:
    sub_2771220(a1: v21, a2: v30, a3: v31);
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
    return sub_4F39A60();
  }
  *(_BYTE *)(v26 + v31 + 12) = v34;
LABEL_9:
  result = (__int64)v27;
  v27[2] = v28;
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
