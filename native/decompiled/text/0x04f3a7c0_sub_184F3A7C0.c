// sub_184F3A7C0
// rva 0x04f3a7c0  size 454  section .text  group text
// window base 0x184f3a7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3A7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+8h] [rbp-30h]
  __int64 v23; // [rsp+10h] [rbp-28h]
  int v24; // [rsp+1Ch] [rbp-1Ch]
  int v25; // [rsp+20h] [rbp-18h]
  unsigned int v26; // [rsp+24h] [rbp-14h]
  int v27; // [rsp+28h] [rbp-10h]
  unsigned int v28; // [rsp+2Ch] [rbp-Ch]
  int v29; // [rsp+30h] [rbp-8h]
  int v30; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    v30 = a6;
    v29 = a5;
    v23 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    v10 = (a6 << a5) - v9;
    v11 = v9 + (2 << a5);
    if ( (int)v11 > v10 )
      JUMPOUT(0x309E507F6LL);
    v12 = (unsigned int)(a6 << a5);
    v13 = (unsigned int)(v12 - 1);
    if ( (unsigned int)v13 < 0x7FFFFFF7 )
    {
      v28 = (a6 << a5) - v9;
      v27 = a6 << a5;
      v26 = v9;
      v30 = a6;
      v29 = a5;
      v23 = a3;
      v14 = a6 << a5;
    }
    else
    {
      v25 = a6 << a5;
      v24 = v9 + (2 << a5);
      v27 = a6 << a5;
      v30 = a6;
      v29 = a5;
      v23 = a3;
      v26 = v9;
      v28 = (a6 << a5) - v9;
      v14 = MEMORY[0x1863202E0](a1: v13, a2: v11, a3: v9, a4: v12, a5: (unsigned int)v10);
    }
    if ( v14 == 0x7FFFFFFF )
    {
LABEL_13:
      v16 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v24 = v14;
        v16 = MEMORY[0x181EAA920](a1: v13, a2: v11, a3: 34082880);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v16 + 40;
        *(_DWORD *)v16 = 34082880;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)(v16 + 32) = 0;
      }
      *(_DWORD *)(v16 + 20) = 46923644;
      *(_DWORD *)(v16 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - v7) >> 3;
      v22 = v16;
      MEMORY[0x18503B9A0](a1: v13, a2: v11, a3: v16, a4: v12, a5: 0);
      v20 = v22;
      *(_DWORD *)(v22 + 8) = 45952550;
      if ( (*(_DWORD *)v20 & 2) != 0 )
        goto LABEL_17;
      while ( 1 )
      {
        v20 = MEMORY[0x182769900](a1: v18, a2: v19, a3: v20, a4: v17, a5: &a7);
LABEL_17:
        v17 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v17) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v17) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v14 = MEMORY[0x18277F280]();
    return (unsigned int)(v14 >> v29);
  }
  v30 = a6;
  v29 = a5;
  v14 = MEMORY[0x182771080]();
  goto LABEL_13;
}
