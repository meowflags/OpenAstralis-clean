// sub_18502BEA0
// rva 0x0502bea0  size 517  section .text  group text
// window base 0x18502bea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502BEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-10h]
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    v24 = a3;
    v9 = MEMORY[0x18631C320]();
    if ( v9 == v7 )
      goto LABEL_12;
    v13 = *(unsigned int *)(v9 + 28);
    if ( (_DWORD)v13 == 0 )
    {
      MEMORY[0x182771080]();
      while ( 1 )
      {
        v16 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v16) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v16) >> 9) + 0x38) = 0;
        v19 = v21;
LABEL_11:
        while ( 1 )
        {
          MEMORY[0x182769900](a1: v17, a2: v18, a3: v19, a4: v16, a5: &a7);
LABEL_12:
          v20 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v20 + 40) > *(_QWORD *)(v8 + 32) )
          {
            v20 = MEMORY[0x181EAA920](a1: v11, a2: v12, a3: 37748056);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v20 + 40;
            *(_DWORD *)v20 = 37748056;
            *(_DWORD *)(v20 + 4) = 0;
            *(_QWORD *)(v20 + 8) = 0;
            *(_QWORD *)(v20 + 16) = 0;
            *(_QWORD *)(v20 + 24) = 0;
            *(_QWORD *)(v20 + 32) = 0;
          }
          *(_DWORD *)(v20 + 20) = 46923644;
          *(_DWORD *)(v20 + 16) = *(_DWORD *)(v7 + 374343896);
          *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v7) >> 3;
          v23 = (_DWORD *)v20;
          sub_18503B9A0(a1: v11, a2: v12, a3: v20, a4: v10, a5: 0);
          v21 = (unsigned __int64)v23;
          v23[2] = 44169069;
          if ( (*(_DWORD *)v21 & 2) != 0 )
            break;
          v19 = v21;
        }
      }
    }
    v23 = (_DWORD *)v9;
    result = MEMORY[0x1860FDAE0](a1: v11, a2: v12, a3: v24, a4: v10, a5: v7 + 8LL * *(unsigned int *)(v7 + 8 * v13 + 4));
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v24 = a3;
  v15 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v15 + 48) > *(_QWORD *)(v8 + 32) )
  {
    v15 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v15 + 48;
    *(_DWORD *)v15 = 34101256;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = 0;
    *(_QWORD *)(v15 + 40) = 0;
  }
  *(_DWORD *)(v15 + 20) = 46923644;
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v7 + 374343896);
  *(_DWORD *)(v15 + 12) = (unsigned __int64)(v15 - v7) >> 3;
  v23 = (_DWORD *)v15;
  sub_18503B9A0(a1, a2, a3: v15, a4, a5: 0);
  v19 = (unsigned __int64)v23;
  goto LABEL_11;
}
