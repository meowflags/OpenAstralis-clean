// sub_18278E1C0
// rva 0x0278e1c0  size 432  section .text  group text
// window base 0x18278e1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278E1C0(
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
        __m128 a14,
        char a15)
{
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rbx
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // ecx
  int v35; // edi
  int v36; // esi
  int v37; // r8d
  int v38; // r9d
  char v39; // [rsp+0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+8h] [rbp-30h]
  __int64 v41; // [rsp+10h] [rbp-28h]
  __int64 v42; // [rsp+18h] [rbp-20h]
  __int64 v43; // [rsp+20h] [rbp-18h]
  unsigned int v44; // [rsp+2Ch] [rbp-Ch]
  unsigned int v45; // [rsp+30h] [rbp-8h]
  unsigned int v46; // [rsp+34h] [rbp-4h]

  v43 = a3;
  v42 = a5;
  v41 = a6;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v18 + 8) )
  {
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v17 )
  {
    if ( *(_DWORD *)(a5 + 8) == 0 )
    {
      v21 = 0;
LABEL_15:
      if ( *(int *)(v18 + 16) <= 0 )
        sub_18277F280(a1, a2, a3, a4: v21);
      return 0xFFFFFFFFLL;
    }
    v19 = *(unsigned int *)(a5 + 12);
    v15 = v17 + 8 * v19;
    if ( (_DWORD)v19 == 0 )
      goto LABEL_28;
    v46 = *(_DWORD *)(a5 + 8);
    v20 = *(unsigned int *)(v17 + 8 * v19 + 4);
    if ( (_DWORD)v20 == 0 )
      goto LABEL_6;
    v30 = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)v30 == 0 )
      goto LABEL_31;
    v40 = v15;
    v16 = v17 + 8 * v30;
    v31 = MEMORY[0x1827B7E00](a1, a2, a3: v16, a4: v20, a5: (unsigned int)v20);
    if ( v31 != v41 )
    {
LABEL_6:
      v21 = 1;
      v22 = v46;
      v23 = v42;
      a3 = v43;
      while ( (int)v22 > (int)v21 )
      {
        if ( v22 <= (unsigned int)v21 )
          goto LABEL_29;
        v24 = *(unsigned int *)(v23 + 4 * v21 + 12);
        v16 = v17 + 8 * v24;
        if ( (_DWORD)v24 == 0 )
          goto LABEL_30;
        v25 = *(_DWORD *)(v17 + 8 * v24 + 4);
        a2 = (unsigned int)(v21 + 1);
        if ( v25 != 0 )
        {
          v26 = *(unsigned int *)(a3 + 24);
          if ( (_DWORD)v26 == 0 )
            goto LABEL_32;
          v44 = v21 + 1;
          v40 = v16;
          v45 = v21;
          v27 = MEMORY[0x1827B7E00](a1: v17 + 8 * v26, a2, a3: v17 + 8 * v26, a4: v21, a5: v25);
          if ( v27 == v41 )
          {
            v32 = v45;
            goto LABEL_22;
          }
          v21 = v44;
          v22 = v46;
          v23 = v42;
          a3 = v43;
        }
        else
        {
          v21 = (unsigned int)a2;
        }
      }
      goto LABEL_15;
    }
    v32 = 0;
LABEL_22:
    if ( *(int *)(v18 + 16) <= 0 )
      sub_18277F280(a1, a2, a3: v28, a4: v32);
    return (unsigned int)v32;
  }
  sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v39);
LABEL_28:
  v40 = v15;
  v22 = sub_182771080(a1, a2, a3, a4: v19, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v39);
LABEL_29:
  v45 = v21;
  sub_182771220(a1, a2, a3: (unsigned int)v21, a4: v21, a5: v22, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v39);
LABEL_30:
  v40 = v16;
  v45 = v21;
  sub_182771080(a1, a2, a3, a4: v21, a5: v23, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v39);
LABEL_31:
  sub_182771080(a1, a2, a3, a4: v20, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v39);
LABEL_32:
  sub_182771080(a1: v26, a2, a3, a4: v21, a5: v23, a6: v41, a7, a8, a9, a10, a11, a12, a13, a14, a15: v39);
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
  return sub_18278E380(a1: v35, a2: v36, a3: v33, a4: v34, a5: v37, a6: v38, a7: a15);
}
