// sub_4F2D600
// rva 0x04f2d600  size 610  section .text  group text
// window base 0x184f2d600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2D600(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 result; // rax
  signed __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // [rsp+0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+10h] [rbp-38h]
  __int64 v34; // [rsp+18h] [rbp-30h]
  unsigned int v35; // [rsp+24h] [rbp-24h]
  __int64 v36; // [rsp+28h] [rbp-20h]
  __int64 v37; // [rsp+30h] [rbp-18h]
  unsigned int v38; // [rsp+3Ch] [rbp-Ch]
  unsigned int v39; // [rsp+40h] [rbp-8h]
  unsigned int v40; // [rsp+44h] [rbp-4h]

  v37 = a3;
  v40 = a1;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v8 + 8) )
  {
    v39 = a6;
    v36 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v9 = *(_DWORD *)(a5 + 8);
    v36 = a5;
    v39 = a6;
    v38 = v9;
    result = sub_6329C40(a1: v7, a2, a3: a6, a4, a5: a1, a6: v9);
    v12 = v40;
    if ( v40 != 0 )
    {
      v13 = *(unsigned int *)(v37 + 12);
      if ( (_DWORD)v13 != 0 )
      {
        v35 = *(_DWORD *)(v37 + 12);
        v14 = *(unsigned int *)(v7 + 8 * v13 + 20);
        if ( (_DWORD)v14 != 0 && v8 != *(_QWORD *)(v7 + 376351704) )
        {
          v11 = *(_QWORD *)(v8 + 64);
          v15 = *(_QWORD *)(v7 + 8 * v14 + 16);
          if ( v15 != 0 )
          {
            if ( v15 == v11 )
            {
              v23 = *(_DWORD *)(v7 + 8 * v14 + 28) + 1;
              if ( v23 >= 0 )
              {
                *(_DWORD *)(v7 + 8 * v14 + 28) = v23;
                v34 = v7 + 8 * v13;
                goto LABEL_10;
              }
            }
          }
          else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v14 + 16), 0, v11) == 0 )
          {
            v34 = v7 + 8 * v13;
LABEL_10:
            *(_DWORD *)(v7 + 8 * v13 + 16) = 0;
            result = sub_4F362E0(a1: v40, a2: v11, a3: v34, a4: v13, a5: v36, a6: v39);
            v18 = v35;
            v19 = *(unsigned int *)(v7 + 8LL * v35 + 20);
            v20 = *(_DWORD *)(v7 + 8 * v19 + 28);
            if ( v20 == 1 )
            {
              *(_QWORD *)(v7 + 8 * v19 + 16) = 0;
              __faststorefence();
            }
            else
            {
              result = (unsigned int)(v20 - 1);
              *(_DWORD *)(v7 + 8 * v19 + 28) = result;
            }
            if ( v20 == 1 )
            {
              v21 = *(unsigned int *)(v7 + 8 * v19 + 4);
              if ( (_DWORD)v21 != 0 )
              {
                v22 = *(unsigned int *)(v7 + 8 * v21 + 8);
                if ( (_DWORD)v22 != 0 && *(_DWORD *)(v7 + 8 * v22 + 16) != 0 )
                  result = sub_208CCA0(a1: v16, a2: v17, a3: v34, a4: v18, a5: 1);
              }
            }
            if ( *(int *)(v8 + 16) <= 0 )
              return sub_277F280();
            return result;
          }
        }
        v34 = v7 + 8 * v13;
        sub_208CC20(a1: v12, a2: v11, a3: v34);
        v13 = v35;
        goto LABEL_10;
      }
LABEL_36:
      v24 = sub_2771080();
      v26 = (unsigned int)(v31 - 1);
      *(_DWORD *)(v7 + 8 * v25 + 28) = v26;
      if ( v31 == 1 )
        goto LABEL_30;
      while ( 1 )
      {
        v24 = sub_2769900(a1: v27, a2: v28, a3: v24, a4: v26, a5: &a7);
LABEL_30:
        v29 = *(unsigned int *)(v7 + 8 * v25 + 4);
        if ( (_DWORD)v29 != 0 )
        {
          v30 = *(unsigned int *)(v7 + 8 * v29 + 8);
          if ( (_DWORD)v30 != 0 && *(_DWORD *)(v7 + 8 * v30 + 16) != 0 )
          {
            v33 = v24;
            sub_208CCA0(a1: v27, a2: v28, a3: v34, a4: v26, a5: 1);
            v24 = v33;
          }
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v40, a2: v11, a3: v37);
    return result;
  }
  v39 = a6;
  sub_2771080();
  goto LABEL_36;
}
