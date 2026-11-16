// sub_5047940
// rva 0x05047940  size 2697  section .text  group text
// window base 0x185047940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5047940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+20h] [rbp-38h]
  __int64 v33; // [rsp+28h] [rbp-30h]
  __int64 v34; // [rsp+30h] [rbp-28h]
  int v35; // [rsp+3Ch] [rbp-1Ch]
  int v36; // [rsp+44h] [rbp-14h]
  __int64 v37; // [rsp+48h] [rbp-10h]
  __int64 v38; // [rsp+50h] [rbp-8h]

  v34 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v9 + 8) )
  {
    v10 = sub_1EB84E0();
LABEL_9:
    v36 = v11;
    v13 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v35 = v10;
      v13 = sub_1EAA920(a1, a2, a3: 34909680);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v13 + 40;
      *(_DWORD *)v13 = 34909680;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
    }
    *(_DWORD *)(v13 + 20) = 46923644;
    *(_DWORD *)(v13 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v13 - v8) >> 3;
    v33 = v13;
    sub_503B9A0(a1, a2, a3: (unsigned int *)v13, a4: v11, a5: 0);
    while ( 1 )
    {
      v17 = sub_2769900(a1: v15, a2: v16, a3: v33, a4: v14, a5: &a7);
      v20 = (unsigned int)(v17 + 128);
      if ( (unsigned int)v20 >= 0x100 )
      {
        v21 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v21 + 16) > *(_QWORD *)(v9 + 32) )
        {
          v35 = v17;
          v21 = sub_1EAA920(a1: v18, a2: v19, a3: 34086464);
          v17 = v35;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v21 + 16;
          *(_DWORD *)v21 = 34086464;
          *(_DWORD *)(v21 + 4) = 0;
          *(_QWORD *)(v21 + 8) = 0;
        }
        *(_DWORD *)(v21 + 4) = v17;
      }
      else
      {
        v21 = v8 + 8LL * *(unsigned int *)(v8 + 4 * v20 + 376353204);
      }
      v35 = v17;
      v22 = sub_28C1E80(a1: v18, a2: v19, a3: v21);
      if ( v36 != 0 )
      {
        v25 = v32;
        v26 = *(unsigned int *)(v32 + v37);
        v27 = *(_DWORD *)(v8 + 8 * v26 + 28);
        if ( v27 == 1 )
        {
          *(_QWORD *)(v8 + 8 * v26 + 16) = 0;
          __faststorefence();
        }
        else
        {
          *(_DWORD *)(v8 + 8 * v26 + 28) = v27 - 1;
        }
        if ( v27 != 1 )
        {
          v33 = v22;
          goto LABEL_19;
        }
        v28 = *(unsigned int *)(v8 + 8 * v26 + 4);
        if ( (_DWORD)v28 == 0 )
        {
          v33 = v22;
          goto LABEL_19;
        }
        v29 = *(unsigned int *)(v8 + 8 * v28 + 8);
        if ( (_DWORD)v29 == 0 )
        {
          v33 = v22;
          goto LABEL_19;
        }
        if ( *(_DWORD *)(v8 + 8 * v29 + 16) == 0 )
        {
          v33 = v22;
          goto LABEL_19;
        }
        v31 = v22;
      }
      else
      {
        v31 = v22;
        v25 = v32;
      }
      sub_208CCA0(a1: v23, a2: v24, a3: v25);
      v38 = v7;
      v33 = v31;
LABEL_19:
      sub_6360580();
    }
  }
  v10 = *(_DWORD *)(a3 + 136);
  if ( (v10 & 0xFFFFFEFF) != 0 )
  {
    v11 = v10 & 0xFFFFFEFF;
    if ( (unsigned int)v11 <= 0x63 )
      __asm { jmp     r8; switch jump }
    goto LABEL_9;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
  return v8 + 375389016;
}
