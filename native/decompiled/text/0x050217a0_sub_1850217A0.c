// sub_1850217A0
// rva 0x050217a0  size 914  section .text  group text
// window base 0x1850217a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850217A0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v37; // [rsp+10h] [rbp-28h]
  _DWORD *v38; // [rsp+18h] [rbp-20h]
  __int64 v39; // [rsp+20h] [rbp-18h]
  unsigned int v40; // [rsp+2Ch] [rbp-Ch]
  __int64 v41; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 >= 0 )
  {
    if ( a3 >= 0x3FFFFFFF )
    {
      while ( 1 )
      {
        v40 = a3;
        v16 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v9 + 32) )
        {
          v16 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v16 + 24;
          *(_DWORD *)v16 = 34085680;
          *(_DWORD *)(v16 + 4) = 0;
          *(_QWORD *)(v16 + 8) = 0;
          *(_QWORD *)(v16 + 16) = 0;
        }
        v39 = v16;
        v17 = *(_QWORD *)(v9 + 40);
        v18 = 34082368;
        if ( (unsigned __int64)(v17 + 32) > *(_QWORD *)(v9 + 32) )
        {
          v17 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: 34082368, a5: 16);
          v16 = v39;
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v17 + 32;
          *(_QWORD *)v17 = 34082368;
          *(_DWORD *)(v17 + 8) = 16;
          *(_DWORD *)(v17 + 12) = 0;
          *(_QWORD *)(v17 + 16) = 0;
          *(_QWORD *)(v17 + 24) = 0;
        }
        *(_DWORD *)(v16 + 4) = (unsigned __int64)(v17 - v8) >> 3;
        if ( (*(_DWORD *)v16 & 2) != 0 )
        {
          v18 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) = 0;
        }
        MEMORY[0x184F36F80](a1, a2, a3: v16, a4: v18, a5: v8 + 366449096);
        MEMORY[0x184F36640](a1: v20, a2: v21, a3: v39, a4: v19, a5: v40);
        MEMORY[0x184F36F80](a1: v23, a2: v24, a3: v39, a4: v22, a5: v8 + 372616768);
        MEMORY[0x184F36640](a1: v26, a2: v27, a3: v39, a4: v25, a5: 0x3FFFFFFF);
        v31 = v39;
        if ( *(_DWORD *)(v39 + 8) != 0 )
        {
          v32 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v32 + 24) > *(_QWORD *)(v9 + 32) )
          {
            v32 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 34082680);
            v33 = v39;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v32 + 24;
            *(_DWORD *)v32 = 34082680;
            *(_DWORD *)(v32 + 4) = 0;
            *(_QWORD *)(v32 + 8) = 0;
            *(_QWORD *)(v32 + 16) = 0;
            v33 = v31;
          }
          v37 = (_DWORD *)v32;
          MEMORY[0x184FE9280](a1: v29, a2: v30, a3: v32, a4: v28, a5: v33, a6: v8);
          v41 = v7;
          v38 = v37;
        }
        else
        {
          v38 = (_DWORD *)(v8 + 373281248);
        }
        v34 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v34 + 40) > *(_QWORD *)(v9 + 32) )
        {
          v34 = MEMORY[0x181EAA920](a1: v29, a2: v30, a3: 34082880);
        }
        else
        {
          *(_QWORD *)(v9 + 40) = v34 + 40;
          *(_DWORD *)v34 = 34082880;
          *(_DWORD *)(v34 + 4) = 0;
          *(_QWORD *)(v34 + 8) = 0;
          *(_QWORD *)(v34 + 16) = 0;
          *(_QWORD *)(v34 + 24) = 0;
          *(_QWORD *)(v34 + 32) = 0;
        }
        *(_DWORD *)(v34 + 20) = 46923644;
        *(_DWORD *)(v34 + 16) = *(_DWORD *)(v8 + 374343896);
        *(_DWORD *)(v34 + 12) = (unsigned __int64)(v34 - v8) >> 3;
        v37 = (_DWORD *)v34;
        sub_18503B9A0(a1: v29, a2: v30, a3: v34, a4: v28, a5: 0);
        v35 = (unsigned __int64)v37;
        v37[2] = ((unsigned __int64)v38 - v8) >> 3;
        if ( (*(_DWORD *)v35 & 2) != 0 )
        {
          v12 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v12) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v12) >> 9) + 0x38) = 0;
          v15 = v35;
        }
        else
        {
          v15 = v35;
        }
LABEL_11:
        MEMORY[0x182769900](a1: v13, a2: v14, a3: v15, a4: v12, a5: &a7);
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (unsigned int)(2 * a3);
  }
  v11 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v9 + 32) )
  {
    v40 = a3;
    v11 = MEMORY[0x181EAA920](a1, a2, a3: 36108448);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v11 + 40;
    *(_DWORD *)v11 = 36108448;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    v40 = a3;
  }
  *(_DWORD *)(v11 + 20) = 46923644;
  *(_DWORD *)(v11 + 16) = *(_DWORD *)(v8 + 374343896);
  *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - v8) >> 3;
  v39 = v11;
  sub_18503B9A0(a1, a2, a3: v11, a4, a5: 0);
  v15 = v39;
  goto LABEL_11;
}
