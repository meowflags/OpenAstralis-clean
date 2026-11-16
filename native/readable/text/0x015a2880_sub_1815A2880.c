// sub_15A2880
// rva 0x015a2880  size 482  section .text  group text
// window base 0x1815a2880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A2880(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 result; // rax
  _DWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  int v23; // [rsp+1Ch] [rbp-Ch]
  _DWORD *v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    v9 = sub_1EB84E0();
LABEL_9:
    v15 = *(_QWORD *)(v8 + 40);
    v16 = v15 + 40;
    if ( (unsigned __int64)(v15 + 40) <= *(_QWORD *)(v8 + 32) )
    {
      *(_QWORD *)(v8 + 40) = v16;
      *(_DWORD *)v15 = 34090048;
      *(_DWORD *)(v15 + 4) = 0;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = 0;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v15 + 32) = 0;
LABEL_11:
      *(_DWORD *)(v15 + 20) = 46923644;
      *(_DWORD *)(v15 + 16) = v9;
      *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
      v22 = v15;
      sub_503B9A0(a1, a2, a3: v15, a4: v16, a5: 0);
      while ( 1 )
      {
        sub_2769900(a1: v18, a2: v19, a3: v22, a4: v17, a5: &a7);
LABEL_13:
        v9 = sub_2771080();
LABEL_14:
        v20 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v20 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v23 = v9;
          v20 = sub_1EAA920(a1, a2, a3: 34449872);
          v9 = v23;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v20 + 40;
          *(_DWORD *)v20 = 34449872;
          *(_DWORD *)(v20 + 4) = 0;
          *(_QWORD *)(v20 + 8) = 0;
          *(_QWORD *)(v20 + 16) = 0;
          *(_QWORD *)(v20 + 24) = 0;
          *(_QWORD *)(v20 + 32) = 0;
        }
        *(_DWORD *)(v20 + 20) = 46923644;
        *(_DWORD *)(v20 + 16) = v9;
        *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v7) >> 3;
        v22 = v20;
        sub_503B9A0(a1, a2, a3: v20, a4: v11, a5: 0);
      }
    }
LABEL_18:
    v23 = v9;
    v15 = sub_1EAA920(a1, a2, a3: 34090048);
    v9 = v23;
    goto LABEL_11;
  }
  v24 = a3;
  v9 = *(_DWORD *)(v7 + 374343896);
  if ( a3[2] == 0 )
    goto LABEL_9;
  v10 = (unsigned int)a3[5];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_13;
  v11 = *(unsigned int *)(v7 + 8 * v10 + 44);
  if ( (_DWORD)v11 != a3[7] )
    goto LABEL_14;
  result = sub_15A6420(a1, a2, a3: v7 + 8 * v10, a4: v11, a5: v7 + 8LL * (unsigned int)a3[4]);
  v13 = v24;
  v14 = (unsigned int)v24[5];
  if ( (_DWORD)v14 == 0 )
  {
    v9 = sub_2771080();
    goto LABEL_18;
  }
  v24[7] = *(_DWORD *)(v7 + 8 * v14 + 44);
  v13[2] = 0;
  v13[4] = 0;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
