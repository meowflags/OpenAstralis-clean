// sub_4F2DCA0
// rva 0x04f2dca0  size 595  section .text  group text
// window base 0x184f2dca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2DCA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  signed __int64 v14; // r10
  __int64 v15; // r11
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // [rsp+0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+18h] [rbp-30h]
  unsigned int v36; // [rsp+24h] [rbp-24h]
  __int64 v37; // [rsp+28h] [rbp-20h]
  __int64 v38; // [rsp+30h] [rbp-18h]
  unsigned int v39; // [rsp+3Ch] [rbp-Ch]
  unsigned int v40; // [rsp+40h] [rbp-8h]
  int v41; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v10 + 8) )
  {
    v41 = a1;
    v40 = a6;
    v38 = a5;
    v37 = a3;
    sub_1EB84E0();
  }
  else
  {
    v11 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v11 != 0 )
    {
      v36 = *(_DWORD *)(a3 + 12);
      v12 = *(unsigned int *)(v9 + 8 * v11 + 20);
      v13 = (unsigned int)a1 + a6;
      if ( (_DWORD)v12 != 0 && v10 != *(_QWORD *)(v9 + 376351704) )
      {
        v14 = *(_QWORD *)(v10 + 64);
        v15 = *(_QWORD *)(v9 + 8 * v12 + 16);
        if ( v15 != 0 )
        {
          if ( v15 == v14 )
          {
            v24 = *(_DWORD *)(v9 + 8 * v12 + 28) + 1;
            if ( v24 >= 0 )
            {
              *(_DWORD *)(v9 + 8 * v12 + 28) = v24;
              v39 = a1 + a6;
              v35 = v9 + 8 * v11;
              v41 = a1;
              v40 = a6;
              v38 = a5;
              v37 = a3;
              goto LABEL_8;
            }
          }
        }
        else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v9 + 8 * v12 + 16), 0, v14) == 0 )
        {
          v39 = a1 + a6;
          v35 = v9 + 8 * v11;
          v41 = a1;
          v40 = a6;
          v38 = a5;
          v37 = a3;
LABEL_8:
          *(_DWORD *)(v9 + 8 * v11 + 16) = 0;
          result = sub_4F36C80(a1: v39, a2: v13, a3: v35, a4: v11, a5: v38, a6: v40);
          v19 = v36;
          v20 = *(unsigned int *)(v9 + 8LL * v36 + 20);
          v21 = *(_DWORD *)(v9 + 8 * v20 + 28);
          if ( v21 == 1 )
          {
            *(_QWORD *)(v9 + 8 * v20 + 16) = 0;
            __faststorefence();
          }
          else
          {
            result = (unsigned int)(v21 - 1);
            *(_DWORD *)(v9 + 8 * v20 + 28) = result;
          }
          if ( v21 == 1 )
          {
            v22 = *(unsigned int *)(v9 + 8 * v20 + 4);
            if ( (_DWORD)v22 != 0 )
            {
              v23 = *(unsigned int *)(v9 + 8 * v22 + 8);
              if ( (_DWORD)v23 != 0 && *(_DWORD *)(v9 + 8 * v23 + 16) != 0 )
                result = sub_208CCA0(a1: v17, a2: v18, a3: v35, a4: v19, a5: 1);
            }
          }
          if ( *(int *)(v10 + 16) <= 0 )
            return sub_277F280();
          return result;
        }
      }
      v39 = a1 + a6;
      v41 = a1;
      v40 = a6;
      v38 = a5;
      v37 = a3;
      v35 = v9 + 8 * v11;
      sub_208CC20(a1, a2: v13, a3: v35);
      v11 = v36;
      goto LABEL_8;
    }
  }
  v41 = a1;
  v40 = a6;
  v38 = a5;
  v37 = a3;
  v25 = sub_2771080();
  v27 = (unsigned int)(v30 - 1);
  *(_DWORD *)(v9 + 8 * v26 + 28) = v27;
  if ( v30 == 1 )
    goto LABEL_25;
  while ( 1 )
  {
    v25 = sub_2769900(a1: v28, a2: v29, a3: v25, a4: v27, a5: &a7);
LABEL_25:
    v32 = *(unsigned int *)(v9 + 8 * v26 + 4);
    if ( (_DWORD)v32 != 0 )
    {
      v33 = *(unsigned int *)(v9 + 8 * v32 + 8);
      if ( (_DWORD)v33 != 0 && *(_DWORD *)(v9 + 8 * v33 + 16) != 0 )
        break;
    }
  }
  return sub_184F2DED1(a1: v28, a2: v29, a3: v33, a4: v27, a5: v30, a6: v31, a7, a8, a9);
}
