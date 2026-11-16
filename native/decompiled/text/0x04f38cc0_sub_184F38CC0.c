// sub_184F38CC0
// rva 0x04f38cc0  size 908  section .text  group text
// window base 0x184f38cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F38CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 i; // r8
  __int64 v20; // rdx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // [rsp+0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+10h] [rbp-38h]
  unsigned int v36; // [rsp+1Ch] [rbp-2Ch]
  __int64 v37; // [rsp+20h] [rbp-28h]
  unsigned int v38; // [rsp+28h] [rbp-20h]
  signed int v39; // [rsp+2Ch] [rbp-1Ch]
  int v40; // [rsp+30h] [rbp-18h]
  unsigned int v41; // [rsp+34h] [rbp-14h]
  unsigned int v42; // [rsp+38h] [rbp-10h]
  unsigned int v43; // [rsp+3Ch] [rbp-Ch]
  unsigned int v44; // [rsp+40h] [rbp-8h]
  int v45; // [rsp+44h] [rbp-4h]

  v35 = a3;
  v45 = a6;
  v44 = a2;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v7 + 8) )
  {
LABEL_37:
    v43 = a1;
    v42 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v6 )
  {
    v8 = *(_DWORD *)(a3 + 8);
    v41 = v8;
    v9 = a1 - (v8 >> a5);
    v40 = v9;
    v39 = v8 >> a5;
    if ( v9 < 1 )
    {
      v43 = a1;
      v42 = a5;
      v10 = v8 >> a5;
    }
    else
    {
      v42 = a5;
      v43 = a1;
      v10 = sub_184F3A7C0(a1, a2, a3, a4: v9, a5: a2, a6: a1, a7: v33);
      a2 = v44;
    }
    v38 = v10;
    if ( (_DWORD)a2 != v42 )
    {
      v37 = 34082368;
      v11 = MEMORY[0x1850217A0](a1, a2, a3: v10);
      if ( (v11 & 0x80000000) == 0 )
      {
        v15 = *(_QWORD *)(v7 + 40);
        v16 = (v11 + 19LL) & 0x1FFFFFFF8LL;
        if ( v16 >= 0x20000 || (v12 = v15 + v16, v15 + v16 > *(_QWORD *)(v7 + 32)) )
        {
          v36 = v11;
          v15 = MEMORY[0x181EAA840](a1: v13, a2: v14, a3: v37, a4: v12, a5: v11);
          v11 = v36;
        }
        else
        {
          v17 = v37;
          *(_QWORD *)(v7 + 40) = v12;
          *(_QWORD *)v15 = v17;
          *(_DWORD *)(v15 + 8) = v11;
          *(_DWORD *)(v15 + 12) = 0;
          v18 = v16 - 16;
          if ( v16 - 16 >= 0x800 )
          {
            v36 = v11;
            memset((void *)(v15 + 16), 0, v18);
            v13 = v15 + v16;
            v18 = 0;
            v11 = v36;
          }
          else
          {
            for ( i = 16; v16 > i; i += 8LL )
              *(_QWORD *)(v15 + i) = 0;
          }
        }
        if ( v45 >= 0 )
        {
          if ( v45 <= v41 )
          {
            if ( v45 <= v11 >> 1 )
            {
              if ( v35 == v6 )
                JUMPOUT(0x309E4EE45LL);
              if ( v15 == v6 )
                JUMPOUT(0x309E4EE4FLL);
              v34 = v15;
              MEMORY[0x182836300](a1: v13, a2: v14, a3: v35 + 12, a4: v18, a5: v15 + 12);
              if ( *(int *)(v7 + 16) <= 0 )
                MEMORY[0x18277F280]();
              return v34;
            }
LABEL_42:
            MEMORY[0x182770B00](a1: v43, a2: v44, a3: v35, a4: v15, a5: v42);
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
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            __builtin_debugtrap();
            return sub_184F39060(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32);
          }
LABEL_41:
          v34 = v15;
          MEMORY[0x182770B00]();
          goto LABEL_42;
        }
LABEL_40:
        v34 = v15;
        MEMORY[0x182770B00]();
        goto LABEL_41;
      }
LABEL_39:
      MEMORY[0x182770E80](a1: v13, a2: v14, a3: v11);
      goto LABEL_40;
    }
    if ( (int)v10 > v39 )
    {
      v22 = v38 << v44;
      if ( ((v38 << v44) & 0x80000000) == 0 )
      {
        v23 = *(_QWORD *)(v7 + 40);
        v24 = *(_QWORD *)(v7 + 32);
        v25 = (v22 + 19LL) & 0x1FFFFFFF8LL;
        if ( v25 >= 0x20000 || (v26 = v23 + v25) > v24 )
        {
          v37 = v22;
          v36 = v38 << v44;
          MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v24, a5: v22);
          v22 = v36;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v26;
          *(_QWORD *)v23 = 34082368;
          *(_DWORD *)(v23 + 8) = v22;
        }
        if ( v41 >= v22 )
          JUMPOUT(0x309E4EEDDLL);
        JUMPOUT(0x309E4EED2LL);
      }
      MEMORY[0x18579A560](a1, a2, a3: v35, a4: v44, a5: v22);
      goto LABEL_37;
    }
    v20 = v35;
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3: v35);
    return v20;
  }
  v43 = a1;
  v42 = a5;
  v11 = MEMORY[0x182771080]();
  goto LABEL_39;
}
