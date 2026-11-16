// sub_2785CE0
// rva 0x02785ce0  size 343  section .text  group text
// window base 0x182785ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2785CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 i; // rdx
  int v35; // edx
  int v36; // ecx
  int v37; // edi
  int v38; // esi
  int v39; // r8d
  int v40; // r9d
  char v41; // [rsp+0h] [rbp-38h] BYREF
  __int64 v42; // [rsp+10h] [rbp-28h]
  unsigned int v43; // [rsp+1Ch] [rbp-1Ch]
  __int64 v44; // [rsp+20h] [rbp-18h]
  __int64 v45; // [rsp+28h] [rbp-10h]
  int v46; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( (_DWORD)a3 != 0 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1, a2, a3, a4);
    return (unsigned int)a3;
  }
  v10 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v46 = a3;
    v10 = sub_1EAA920(a1, a2, a3: 40542992);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v10 + 24;
    *(_DWORD *)v10 = 40542992;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
  }
  v45 = v10;
  sub_2084C60(a1, a2, a3: v10);
  v44 = sub_2084840(a1: v12, a2: v13, a3: v45, a4: v11, a5: v7 + 368624584);
  v14 = sub_278AF00();
  v18 = sub_2084040(a1: v16, a2: v17, a3: v44, a4: v15, a5: v14);
  v32 = *(unsigned int *)(v45 + 12);
  if ( (_DWORD)v32 != 0 )
  {
    if ( *(_DWORD *)(v7 + 8 * v32 + 8) == 0 )
      goto LABEL_15;
    v33 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v33 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v43 = *(_DWORD *)(v45 + 12);
      v44 = v18;
      v33 = sub_1EAA920(a1: v20, a2: v21, a3: 34082680);
      v32 = v43;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v33 + 24;
      *(_DWORD *)v33 = 34082680;
      *(_DWORD *)(v33 + 4) = 0;
      *(_QWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = 0;
    }
    v44 = v7 + 8 * v32;
    v42 = v33;
    sub_4FE9280(a1: v20, a2: v21, a3: v33, a4: v33, a5: v44, a6: v7);
    for ( i = v42; ; i = v7 + 373281248 )
    {
      sub_28C1C40(a1: v20, a2: v21, a3: i);
LABEL_15:
      ;
    }
  }
  sub_2771080(
    a1: v20,
    a2: v21,
    a3: v19,
    a4: v45,
    a5: v22,
    a6: v23,
    a7: v24,
    a8: v25,
    a9: v26,
    a10: v27,
    a11: v28,
    a12: v29,
    a13: v30,
    a14: v31,
    a15: v41);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2785E40(a1: v37, a2: v38, a3: v35, a4: v36, a5: v39, a6: v40, a7);
}
