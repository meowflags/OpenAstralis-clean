// sub_182776700
// rva 0x02776700  size 454  section .text  group text
// window base 0x182776700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182776700(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  int i; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // [rsp+0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+10h] [rbp-28h]
  __int64 v37; // [rsp+18h] [rbp-20h]
  __int64 v38; // [rsp+20h] [rbp-18h]
  int v39; // [rsp+2Ch] [rbp-Ch]
  unsigned int v40; // [rsp+30h] [rbp-8h]
  unsigned int v41; // [rsp+34h] [rbp-4h]

  v38 = a3;
  v41 = a6;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v15 + 8) )
  {
    v40 = a2;
    v37 = a5;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_25;
  }
  if ( (int)a2 < 0 )
  {
    v18 = a5;
    v40 = a2;
    v37 = a5;
  }
  else
  {
    if ( a5 == v14 )
    {
LABEL_26:
      v40 = a2;
      sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
      goto LABEL_27;
    }
    v16 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v16 == 0 )
    {
LABEL_28:
      v40 = a2;
      v37 = a5;
      v18 = sub_182771080(a1, a2, a3, a4: v16, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
      goto LABEL_29;
    }
    v17 = *(_DWORD *)(v14 + 8 * v16 + 8);
    a4 = (unsigned int)*(char *)(a5 + 12);
    if ( (int)(v17 >> *(_BYTE *)(a5 + 12)) > (int)a2 )
    {
      v37 = a5;
      v40 = a2;
      v18 = MEMORY[0x184FFD140](a1, a2, a3: a5, a4, a5: 0, a6: (unsigned int)a2);
      a6 = v41;
    }
    else
    {
      v18 = a5;
      v40 = a2;
      v37 = a5;
    }
  }
  if ( (int)a6 < 0 )
  {
    v36 = v18;
    v22 = v38;
  }
  else
  {
    if ( v18 == v14 )
    {
LABEL_27:
      sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
      goto LABEL_28;
    }
    v19 = *(unsigned int *)(v18 + 4);
    if ( (_DWORD)v19 == 0 )
    {
LABEL_29:
      v36 = v18;
      sub_182771080(a1, a2, a3: v38, a4: v19, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
      goto LABEL_30;
    }
    v20 = *(_DWORD *)(v14 + 8 * v19 + 8);
    a4 = (unsigned int)*(char *)(v18 + 12);
    v21 = v20 >> *(_BYTE *)(v18 + 12);
    if ( (int)a6 > (int)v21 )
    {
      v27 = v38;
      if ( v38 == v14 )
      {
LABEL_30:
        sub_182771080(a1, a2: v40, a3: v21, a4: v27, a5: v37, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
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
        return sub_1827768E0(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34);
      }
      v39 = v21;
      v36 = v18;
      MEMORY[0x184F35F80](a1, a2, a3: v38, a4: v38, a5: 32);
      for ( i = v39 + 1; ; i = v39 + 1 )
      {
        a6 = v41;
        if ( (int)v41 <= i )
          break;
        v39 = i;
        MEMORY[0x184F35F80](a1, a2, a3: v38, a4, a5: 32);
      }
      v22 = v38;
    }
    else
    {
      v36 = v18;
      v22 = v38;
    }
  }
  if ( v22 == v14 )
  {
LABEL_25:
    sub_182771080(a1, a2, a3: v22, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
    goto LABEL_26;
  }
  result = MEMORY[0x184F36F80](a1, a2, a3: v22, a4, a5: v36);
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_18277F280(a1: v25, a2: v26, a3: v24);
  return result;
}
