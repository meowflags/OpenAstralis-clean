// sub_27744E0
// rva 0x027744e0  size 720  section .text  group text
// window base 0x1827744e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27744E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  _QWORD v18[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+14h] [rbp-24h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-10h]
  __int64 v23; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v18 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27747C0();
  }
  else
  {
    v22 = a3;
    v5 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v5 != 0 )
    {
      v6 = v3 + 8 * v5;
    }
    else
    {
      v8 = *(unsigned int *)(a3 + 8);
      v9 = v3 + 8 * v8;
      v10 = 40483616;
      if ( *(_BYTE *)(a3 + 20) != 0 )
      {
        v11 = *(_QWORD *)(v4 + 40);
        if ( (unsigned __int64)(v11 + 24) > *(_QWORD *)(v4 + 32) )
        {
          v21 = v9;
          v11 = sub_1EAA920(a1, a2, a3: 40483616);
          v9 = v21;
        }
        else
        {
          *(_QWORD *)(v4 + 40) = v11 + 24;
          *(_DWORD *)v11 = 40483616;
          *(_DWORD *)(v11 + 4) = 0;
          *(_QWORD *)(v11 + 8) = 0;
          *(_QWORD *)(v11 + 16) = 0;
        }
        v21 = v11;
        sub_584D8C0(a1, a2, a3: v11, a4: v9, a5: v9);
        v12 = v21;
        a3 = v22;
      }
      else
      {
        if ( (_DWORD)v8 != 0 )
        {
          v13 = v3 + 8 * v8;
        }
        else
        {
          v13 = *(_QWORD *)(v4 + 40);
          if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v4 + 32) )
          {
            v23 = 40483616;
            v21 = v9;
            v13 = sub_1EAA920(a1, a2, a3: 34085680);
            v10 = v23;
            v9 = v21;
          }
          else
          {
            *(_QWORD *)(v4 + 40) = v13 + 24;
            *(_DWORD *)v13 = 34085680;
            *(_DWORD *)(v13 + 4) = 0;
            *(_QWORD *)(v13 + 8) = 0;
            *(_QWORD *)(v13 + 16) = 0;
          }
          v15 = *(_QWORD *)(v4 + 40);
          if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v4 + 32) )
          {
            v20 = v13;
            v23 = v10;
            v21 = v9;
            v15 = sub_1EAA840(a1, a2, a3: 34082368, a4: v9, a5: 16);
            v13 = v20;
            v10 = v23;
            v9 = v21;
          }
          else
          {
            *(_QWORD *)(v4 + 40) = v15 + 32;
            *(_QWORD *)v15 = 34082368;
            *(_DWORD *)(v15 + 8) = 16;
            *(_DWORD *)(v15 + 12) = 0;
            *(_QWORD *)(v15 + 16) = 0;
            *(_QWORD *)(v15 + 24) = 0;
          }
          *(_DWORD *)(v13 + 4) = (unsigned __int64)(v15 - v3) >> 3;
          if ( (*(_DWORD *)v13 & 2) != 0 )
          {
            v17 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v17) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v17) >> 9) + 0x38) = 0;
          }
        }
        a3 = v22;
        v14 = *(_QWORD *)(v4 + 40);
        a2 = *(unsigned int *)(v22 + 4);
        a1 = v14 + 24;
        if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v4 + 32) )
        {
          v20 = v13;
          v21 = v9;
          v19 = a2;
          v18[1] = v3 + 8 * a2;
          v14 = sub_1EAA920(a1, a2, a3: v10);
          a2 = v19;
          v13 = v20;
          a3 = v22;
        }
        else
        {
          *(_QWORD *)(v4 + 40) = a1;
          *(_DWORD *)v14 = 40483616;
          *(_DWORD *)(v14 + 4) = 0;
          *(_QWORD *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 16) = 0;
        }
        *(_DWORD *)(v14 + 8) = a2;
        *(_DWORD *)(v14 + 4) = (unsigned __int64)(v13 - v3) >> 3;
        v12 = v14;
      }
      *(_DWORD *)(a3 + 12) = (unsigned __int64)(v12 - v3) >> 3;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
        v6 = v12;
      }
      else
      {
        v6 = v12;
      }
    }
    if ( *(int *)(v4 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return v6;
  }
}
