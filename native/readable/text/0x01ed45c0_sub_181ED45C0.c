// sub_1ED45C0
// rva 0x01ed45c0  size 994  section .text  group text
// window base 0x181ed45c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1ED45C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // ebx
  int v30; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+10h] [rbp-38h]
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]
  unsigned __int64 v33; // [rsp+20h] [rbp-28h]
  __int64 v34; // [rsp+28h] [rbp-20h]
  __int64 v35; // [rsp+30h] [rbp-18h]
  __int64 v36; // [rsp+38h] [rbp-10h]
  int v37; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v8 + 8) )
  {
    v34 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
    while ( 1 )
    {
      v29 = *(_DWORD *)(v7 + 8 * v28 + 16);
      if ( v29 != 0 )
      {
        v32 = v23;
        sub_208CCA0(a1: v24, a2: v25, a3: v25, a4: v23, a5: v29 != 0);
        v23 = v32;
        v25 = v35;
      }
      do
      {
        do
        {
          sub_2769900(a1: v24, a2: v25, a3: v23, a4: v23, a5: &a7);
          v27 = *(unsigned int *)(v7 + 8 * v26 + 4);
        }
        while ( (_DWORD)v27 == 0 );
        v28 = *(unsigned int *)(v7 + 8 * v27 + 8);
      }
      while ( (_DWORD)v28 == 0 );
    }
  }
  v35 = a5;
  if ( a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 60);
    v10 = v7 + 8 * v9;
    if ( (_DWORD)v9 != 0 )
    {
      v34 = a3;
LABEL_5:
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280(a1, a2, a3, a4: v10, a5);
      return v10;
    }
    v12 = *(_DWORD *)(v7 + 8LL * (*(_DWORD *)a5 >> 3) + 48);
    v37 = v12;
    v36 = v12;
    if ( v12 != 0 )
    {
      a2 = *(unsigned int *)(a5 + v12);
      if ( (_DWORD)a2 != 0 && v8 != *(_QWORD *)(v7 + 376351704) )
      {
        a1 = *(_QWORD *)(v8 + 64);
        v13 = *(_QWORD *)(v7 + 8 * a2 + 16);
        if ( v13 != 0 )
        {
          if ( v13 == a1 )
          {
            v21 = *(_DWORD *)(v7 + 8 * a2 + 28) + 1;
            if ( v21 >= 0 )
            {
              *(_DWORD *)(v7 + 8 * a2 + 28) = v21;
              v33 = v10;
              v34 = a3;
LABEL_17:
              v14 = *(unsigned int *)(a5 + 60);
              v15 = v7 + 8 * v14;
              if ( (_DWORD)v14 == 0 )
              {
                v16 = *(_QWORD *)(v8 + 40);
                if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v8 + 32) )
                {
                  v32 = v15;
                  v16 = sub_1EAA920(a1, a2, a3: 40472632);
                  LODWORD(a5) = v35;
                }
                else
                {
                  *(_QWORD *)(v8 + 40) = v16 + 40;
                  *(_DWORD *)v16 = 40472632;
                  *(_DWORD *)(v16 + 4) = 0;
                  *(_QWORD *)(v16 + 8) = 0;
                  *(_QWORD *)(v16 + 16) = 0;
                  *(_QWORD *)(v16 + 24) = 0;
                  *(_QWORD *)(v16 + 32) = 0;
                  v32 = v15;
                }
                v33 = v16;
                sub_1ED5A20(a1, a2, a3: v16, a4: v16, a5, a6: v13, a7: v30);
                sub_1ED4C00(a1: v17, a2: v18, a3: v35);
                sub_1ED4DC0();
                v19 = v33;
                a5 = v35;
                *(_DWORD *)(v35 + 60) = (v33 - v7) >> 3;
                __faststorefence();
                if ( (*(_DWORD *)a5 & 2) != 0 )
                {
                  v10 = a5 & 0xFFFFFFFFFFF80000LL;
                  v20 = (a5 & 0xFFFFFFFFFFF80000LL) + 2112;
                  if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v20) >> 9) + 0x38) != 0 )
                    *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v20) >> 9) + 0x38) = 0;
                  v15 = v19;
                }
                else
                {
                  v15 = v19;
                }
              }
              if ( v37 != 0 )
              {
                a3 = *(unsigned int *)(a5 + v36);
                v10 = *(unsigned int *)(v7 + 8 * a3 + 28);
                if ( (_DWORD)v10 == 1 )
                {
                  *(_QWORD *)(v7 + 8 * a3 + 16) = 0;
                  __faststorefence();
                }
                else
                {
                  *(_DWORD *)(v7 + 8 * a3 + 28) = v10 - 1;
                }
                if ( (_DWORD)v10 != 1 )
                {
                  v10 = v15;
                  goto LABEL_5;
                }
                a3 = *(unsigned int *)(v7 + 8 * a3 + 4);
                if ( (_DWORD)a3 == 0 )
                {
                  v10 = v15;
                  goto LABEL_5;
                }
                a3 = *(unsigned int *)(v7 + 8 * a3 + 8);
                if ( (_DWORD)a3 == 0 )
                {
                  v10 = v15;
                  goto LABEL_5;
                }
                if ( *(_DWORD *)(v7 + 8 * a3 + 16) == 0 )
                {
                  v10 = v15;
                  goto LABEL_5;
                }
                v31 = v15;
                v22 = 1;
              }
              else
              {
                v31 = v15;
                v22 = 0xFFFFFFFFLL;
              }
              sub_208CCA0(a1, a2, a3: v35, a4: v10, a5: v22);
              v10 = v31;
              a5 = v35;
              goto LABEL_5;
            }
          }
        }
        else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * a2 + 16), 0, a1) == 0 )
        {
          v33 = v7 + 8 * v9;
          v34 = a3;
          goto LABEL_17;
        }
      }
    }
    v33 = v10;
    v34 = a3;
    sub_208CC20(a1, a2, a3: a5);
    a5 = v35;
    goto LABEL_17;
  }
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v34 = a3;
    sub_277F280();
    a3 = v34;
  }
  return v7 + 8LL * *(unsigned int *)(a3 + 8);
}
