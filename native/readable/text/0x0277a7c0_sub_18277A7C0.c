// sub_277A7C0
// rva 0x0277a7c0  size 662  section .text  group text
// window base 0x18277a7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277A7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __m128 v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r9
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __m128 v33; // xmm6
  __m128 v34; // xmm7
  _DWORD *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-38h] BYREF
  __int64 v37; // [rsp+8h] [rbp-30h]
  __int64 v38; // [rsp+10h] [rbp-28h]
  unsigned int v39; // [rsp+1Ch] [rbp-1Ch]
  __int64 v40; // [rsp+20h] [rbp-18h]
  _DWORD *v41; // [rsp+28h] [rbp-10h]
  __int64 v42; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_32;
  }
  sub_2780C20();
  v11 = v7 + 376366288;
  if ( *(int *)(v8 + 336) < 1 )
  {
LABEL_32:
    v35 = (_DWORD *)sub_28C1C40(a1: v9, a2: v10, a3: v7 + 368616744);
    while ( 1 )
    {
      v41 = v35;
      *(double *)v23.m128_u64 = ((double (*)(void))sub_2781280)();
      sub_2769900(
        a1: v25,
        a2: v26,
        a3: v41,
        a4: v24,
        a5: (__int64)&a7,
        a6: v27,
        a7: v23,
        a8: v28,
        a9: v29,
        a10: v30,
        a11: v31,
        a12: v32,
        a13: v33,
        a14: v34);
    }
  }
  v12 = *(_QWORD *)(v7 + 376178832);
  if ( v12 != 0 )
  {
    v42 = *(_QWORD *)(v7 + 376178832);
    if ( v12 == *(_QWORD *)(v7 + 376656976) )
    {
      v14 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v14 = sub_1EAA920(a1: v9, a2: v10, a3: 34161576);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v14 + 24;
        *(_DWORD *)v14 = 34161576;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
      }
      *(_DWORD *)(v14 + 8) = 47045786;
      v12 = v42;
    }
    else
    {
      v13 = *(unsigned int *)(v12 + 72);
      v14 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v39 = *(_DWORD *)(v12 + 72);
        v38 = v7 + 376366288;
        v14 = sub_1EAA920(a1: v9, a2: v10, a3: 34161576);
        v13 = v39;
        v12 = v42;
        v11 = v38;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v14 + 24;
        *(_DWORD *)v14 = 34161576;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
      }
      *(_DWORD *)(v14 + 8) = 47045786;
      if ( (_DWORD)v13 != 0 )
      {
        *(_DWORD *)(v14 + 4) = 1;
        v38 = v14;
        v37 = v7 + 8 * v13;
        sub_57881C0(a1: 0, a2: v10, a3: v14, a4: v12, a5: v37, a6: v11);
        v14 = v38;
        v12 = v42;
      }
    }
    v38 = v14;
    v15 = *(_QWORD *)(v12 + 256);
    while ( v15 != 0 )
    {
      if ( v15 != *(_QWORD *)(v7 + 376656976) )
      {
        v16 = *(unsigned int *)(v15 + 72);
        if ( (_DWORD)v16 != 0 )
        {
          v42 = v15;
          ++*(_DWORD *)(v14 + 4);
          v17 = *(_DWORD *)(v14 + 12);
          v18 = v7 + 8LL * *(unsigned int *)(v14 + 8);
          v37 = v7 + 8 * v16;
          sub_57881C0(a1: v17, a2: v10, a3: v14, a4: v12, a5: v37, a6: v18);
          v15 = v42;
        }
      }
      if ( *(int *)(v8 + 16) <= 0 )
        v15 = sub_277F280(a1: v9, a2: v10, a3: v15);
      else
        v15 = *(_QWORD *)(v15 + 256);
      v14 = v38;
    }
  }
  else
  {
    v14 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v14 = sub_1EAA920(a1: v9, a2: v10, a3: 34161576);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v14 + 24;
      *(_DWORD *)v14 = 34161576;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
    }
    *(_DWORD *)(v14 + 8) = 47045786;
  }
  v40 = v14;
  sub_2781280();
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v20, a2: v21, a3: v19);
  return v40;
}
