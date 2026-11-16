// sub_18501BEC0
// rva 0x0501bec0  size 394  section .text  group text
// window base 0x18501bec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501BEC0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  _DWORD *v22; // [rsp+10h] [rbp-18h]
  unsigned int *v23; // [rsp+18h] [rbp-10h]
  unsigned int v24; // [rsp+20h] [rbp-8h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  v23 = a3;
  v22 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v7 )
  {
    v9 = a3[1];
    result = (__int64)&v7[2 * v9];
    if ( (_DWORD)v9 == 0 )
    {
      while ( 1 )
      {
        MEMORY[0x182771080]();
LABEL_21:
        v16 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
LABEL_19:
        *(_DWORD *)(v16 + 20) = 46923644;
        *(_DWORD *)(v16 + 16) = v7[93585974];
        *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - (_QWORD)v7) >> 3;
        v21 = v16;
        sub_18503B9A0(a1, a2, a3: v16, a4, a5: 0);
        MEMORY[0x182769900](a1: v18, a2: v19, a3: v21, a4: v17, a5: &a7);
      }
    }
    v21 = (__int64)&v7[2 * v9];
    v11 = a3[3];
    if ( (int)v11 <= *(_DWORD *)(v21 + 8) >> 1 )
    {
      v12 = a3[2];
      if ( v12 >= 0 )
      {
        a3[2] = v11;
        if ( (int)v11 > v12 )
        {
          v25 = v11;
          while ( 1 )
          {
            v24 = v12;
            result = sub_18501BB00(a1: a5, a2, a3: result, a4: v11, a5: v12, a6: v11);
            v11 = v25;
            if ( (int)v25 <= (int)result )
              break;
            if ( *(int *)(v8 + 16) <= 0 )
              v12 = MEMORY[0x18277F280](a1: v14, a2, a3: v13, a4: v25, a5: v15, a6: v24);
            else
              v12 = result;
            result = v21;
            a5 = v22;
          }
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v16 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v16 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_21;
  *(_QWORD *)(v8 + 40) = v16 + 48;
  *(_DWORD *)v16 = 34101256;
  *(_DWORD *)(v16 + 4) = 0;
  *(_QWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_QWORD *)(v16 + 40) = 0;
  goto LABEL_19;
}
