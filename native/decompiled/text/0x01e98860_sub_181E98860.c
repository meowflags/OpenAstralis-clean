// sub_181E98860
// rva 0x01e98860  size 288  section .text  group text
// window base 0x181e98860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E98860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  BOOL v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  char v22; // [rsp+0h] [rbp-28h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-18h]
  BOOL v24; // [rsp+1Ch] [rbp-Ch]
  unsigned __int64 v25; // [rsp+20h] [rbp-8h]

  v8 = v6 + 376612120;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3: v8, a4, a5, a6, a7: v22);
    return sub_181E98980(a1: v20, a2: v21, a3: v19);
  }
  v9 = *(_QWORD **)(v6 + 376656592);
  if ( v9 == nullptr )
    goto LABEL_3;
  if ( (unsigned __int64)v9 > a6 || (unsigned __int64)v9 + *v9 <= a6 )
  {
    v11 = v9[2];
    if ( v11 != 0 )
      v12 = (_QWORD *)((char *)v9 + v11);
    else
      v12 = nullptr;
    while ( v12 != nullptr )
    {
      if ( (unsigned __int64)v12 <= a6 && (unsigned __int64)v12 + *v12 > a6 )
      {
        v9 = v12;
        goto LABEL_19;
      }
      v13 = v12[2];
      if ( *(int *)(v7 + 16) <= 0 )
        v12 = (_QWORD *)MEMORY[0x18277F280](a1, a2, a3: v8, a4, a5: v13);
      if ( v13 != 0 )
        v12 = (_QWORD *)((char *)v12 + v13);
      else
        v12 = nullptr;
    }
LABEL_3:
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v25 = a6;
      MEMORY[0x18277F280](a1, a2, a3: v8);
    }
    return 0;
  }
LABEL_19:
  v14 = (unsigned __int64)v9 + v9[4] <= a6;
  v25 = a6;
  v24 = v14;
  v23 = v9;
  sub_181E987A0(a1, a2, a3: v8, a4: (int)v9, a5: (__int64)v9, a6: v14);
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v17, a2: v18, a3: v15, a4: v16, a5: v23);
  return 1;
}
